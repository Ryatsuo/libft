// Creer un tableau et convertit tout ses octest en 0
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
	{
		tab = malloc(1);
		if (!tab)
			return (NULL);
		tab[0] = 0;
		return (tab);
	}
	tab = malloc(size * nmemb);
	if (!tab)
		return (NULL);
	while (i < (nmemb * size))
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
/*
#include <stdio.h>
int main(void)
{
	size_t i = 0;
	size_t nmemb = 10;
	char *tab = ft_calloc(nmemb, sizeof(int));
	while (i < nmemb * sizeof(int))
	{
		if(tab[i] == 0)
			printf("le tableau a l'indice %d a bien la valeur 0\n", i);
		i++;
	}
	free(tab);
	return (0);
}*/