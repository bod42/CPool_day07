/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/

void    my_rev_params(int ac, char **av)
{
	int i = 0;
	
	while (ac-- > 0) {
		my_putstr(av[ac]);
		my_putchar('\n');
	}
}
int	main(int ac, char **av)
{
	my_rev_params(ac, av);
	return (0);
}

