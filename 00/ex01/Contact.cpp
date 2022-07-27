#include "Contact.hpp"

void	Contact::AddContect(void)
{
	std::cout << "His(her) first name is..." << std::endl;
	std::cin >> this->f_name;
	std::cout << "His(her) last name is..." << std::endl;
	std::cin >> this->l_name;
	std::cout << "His(her) nickname is..." << std::endl;
	std::cin >> this->n_name;
	std::cout << "His(her) phone number is..." << std::endl;
	std::cin >> this->p_number;
	std::cout << "His(her) darkest secret is..." << std::endl;
	std::cin >> this->secret;
	std::cout << "Save his(her) Contact." << std::endl;
}

static std::string getShortStr(std::string str)
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - str.size(), ' ') + str);
}

void	Contact::PrintShortContect(void)
{
	std::cout	<< "|" << getShortStr(this->f_name) \
				<< "|" << getShortStr(this->l_name) \
				<< "|" << getShortStr(this->n_name) \
				<< "|" << std::endl;
}

void	Contact::PrintAllContect(void)
{
	std::cout << "first name : " << this->f_name << std::endl;
	std::cout << "last name : " << this->l_name << std::endl;
	std::cout << "nickname : " << this->n_name << std::endl;
	std::cout << "phone number : " << this->p_number << std::endl;
	std::cout << "darkest secret : " << this->secret << std::endl;
}
