#include <iostream>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string p_number;
		std::string secret;
	public:
		void	AddContect(void);
		void	PrintShortContect(void);
		void	PrintAllContect(void);
};