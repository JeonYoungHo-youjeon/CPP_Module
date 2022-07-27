#include <iostream>

int	main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		for (size_t i = 1; i < ac; i++)
		{
			for (size_t j = 0; av[i][j]; j++)
			{
				std::cout << static_cast<char>(std::toupper(av[i][j]));	
			}
		}
	}
	std::cout << std::endl;
	return (0);
}