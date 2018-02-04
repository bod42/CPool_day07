/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

void	my_print_params(char **av)
{
	int i = 0;
	
	while (av[i] != '\0') {
		my_putstr(av[i]);
		my_putchar('\n');
		i++;
	}
}
int	main(int ac, char **av)
{
	my_print_params(av);
	return (0);
}
