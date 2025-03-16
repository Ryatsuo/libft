void	ft_bzero(void *s, int n)
{
	unsigned char	*tmp;
	int				i;

	tmp = s;
	i = 0;
	while (i < n)
	{
		tmp[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av)
{
	int i = 0;
	int j = 0;
	while(av[1][j])
		j++;
	if (ac != 3)
		return (1);
	ft_bzero(av[1], atoi(av[2]));
	while (i < j)
	{
		printf("%c\n", av[1][i]);
		i++;
	}
	return (0);
}*/