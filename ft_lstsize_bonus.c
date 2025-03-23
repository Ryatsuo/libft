// Calcule la longeur d'une liste chainée
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	t_list	*lst = NULL;
	t_list	*premier_pokemon = ft_lstnew("Bulbizarre");
	t_list	*deuxieme_pokemon = ft_lstnew("Herbizarre");
	ft_lstadd_front(&lst, premier_pokemon);
	ft_lstadd_front(&lst, deuxieme_pokemon);
	int len_lst = ft_lstsize(lst);
	printf("%d\n", len_lst);
	return (0);
}*/