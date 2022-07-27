#include <iostream>

int	main(void)
{
	std::string	cmd;

	while (true)
	{
		std::cout << "please enter your command : (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			
		}
		else if (cmd == "SEARCH")
		{
			
		}
		else if (cmd == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "sorry, command not found" << std::endl;
		}
	}
	return (0);
}
