/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youjeon <youjeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:09:48 by youjeon           #+#    #+#             */
/*   Updated: 2022/08/31 01:24:26 by youjeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	this->val_char = 0;
	this->val_int = 0;
	this->val_float = 0;
	this->val_double = 0;
	this->err = false;
}

Convert::Convert(const Convert& obj)
{
	this->val_char = obj.getChar();
	this->val_int = obj.getInt();
	this->val_float = obj.getFloat();
	this->val_double = obj.getDouble();
	this->err = obj.getErr();
	this->err = false;

}

Convert& Convert::operator=(const Convert& obj)
{
	this->val_char = obj.getChar();
	this->val_int = obj.getInt();
	this->val_float = obj.getFloat();
	this->val_double = obj.getDouble();
	this->err = obj.getErr();
	return (*this);
}

Convert::~Convert(void)
{
}

Convert::Convert(std::string s)
{
	this->val_char = 0;
	this->val_int = 0;
	this->val_float = 0;
	this->val_double = 0;
	this->err = false;
	setValue(s);
}

void Convert::setValue(std::string s)
{
	std::string::size_type n;
	std::string::size_type f;
	
	try
	{
		this->value = s;
	}
	catch(const std::bad_alloc& e)
	{
		err = true;
		return ;
	}
	
	n = s.find('.');
	f = s.find('f');

	if (value == "nan" || value == "inf" || value == "+inf" || value == "-inf" || value == "nanf" || value == "inff" || value == "+inff" || value == "-inff")
	{
		if (value == "nan" || value == "nanf")
		{
			val_double = sqrt(-1.0);
		}
		else
		{
			if (value[0] == '-')
			{
				val_double = __DBL_MAX__ * -1000;
			}
			else
			{
				val_double = __DBL_MAX__ * 1000;
			}
		}
	}
	else if (s.length() == 1 && !std::isdigit(static_cast<char>(s[0]))) // 한자리수이며 숫자가 아닌 문자 = char
	{
		val_char = static_cast<char>(s[0]);
		val_int = static_cast<int>(val_char);
		val_float = static_cast<float>(val_char);
		val_double = static_cast<double>(val_char);
	}
	else if (n == static_cast<unsigned long>(-1)) // npos일때 = .을 찾지 못했을경우 = int
	{
		val_int = std::atoi(s.c_str());

		std::stringstream ss;
		
		ss << val_int;
		if (ss.str() != value)
		{
			err = true;
		}
		else
		{
			val_char = static_cast<char>(val_int);
			val_float = static_cast<float>(val_int);
			val_double = static_cast<double>(val_int);
		}
	}
	else if (f != static_cast<unsigned long>(-1)) // npos가 아닐때 = float 
	{
		val_float = std::atof(s.c_str());
		val_int = static_cast<int>(val_float);
		val_char = static_cast<char>(val_float);
		val_double = static_cast<double>(val_float);
	}
	else // 그 외 경우는 실수이므로 변환 후 처리
	{
		val_double = std::strtod(s.c_str(), NULL);
		val_int = static_cast<int>(val_double);
		val_char = static_cast<char>(val_double);
		val_float = static_cast<float>(val_double);
	}	
}

char Convert::printChar(void) const
{
	std::stringstream ss;
	
	ss << val_int;
	if (err || ss.str() != value || std::isnan(val_double) || std::isinf(val_double))
		throw std::runtime_error("impossible");
	else if (val_int >= 32 && val_int <= 126)
		return (val_char);
	else if (val_int < 32 && val_int >= 0)
		throw std::runtime_error("Non displayable");
	else
		throw std::runtime_error("impossible");
}

int Convert::printInt(void) const
{
	std::stringstream ss;
	
	ss << val_int;
	if (err || std::isnan(val_double) || std::isinf(val_double))
		throw std::runtime_error("impossible");
	return (val_int);
}

float Convert::printFloat(void) const
{
	if (err)
		throw std::runtime_error("impossible");
	if (std::isnan(val_double))
		throw std::runtime_error("nanf");
	if (std::isinf(val_double) && val_double > 0)
		throw std::runtime_error("inff");
	else if (std::isinf(val_double) && val_double < 0)
		throw std::runtime_error("-inff");
	return (val_float);
}

double Convert::printDouble(void) const
{
	if (err)
		throw std::runtime_error("impossible");
	if (std::isnan(val_double))
		throw std::runtime_error("nan");
	if (std::isinf(val_double) && val_double > 0)
		throw std::runtime_error("inf");
	else if (std::isinf(val_double) && val_double < 0)
		throw std::runtime_error("-inf");
	return (val_double);	
}

char Convert::getChar(void) const
{
	return (val_char);

}

int Convert::getInt(void) const
{
	return (val_int);

}

float Convert::getFloat(void) const
{
	return (val_float);

}

double Convert::getDouble(void) const
{
	return (val_double);
	
}

bool Convert::getErr(void) const
{
	return (err);
}


std::ostream& operator<<(std::ostream &out, const Convert &b)
{
	try
	{
		out << "char: " << b.printChar() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		out << "int: " << b.printInt() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		if (static_cast<float>(b.getInt()) == b.getFloat())
		{
			out << "float: " << b.printFloat() << ".0f" << std::endl;
		}
		else
		{
			out << "float: " << b.printFloat() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		if (static_cast<double>(b.getInt()) == b.getDouble())
		{
			out << "double: " << b.printDouble() << ".0" << std::endl;
		}
		else
		{
			out << "double: " << b.printDouble() << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (out);
}
