// Teste si un caractère est une lettre
#include "libft.h"

int	ft_isalpha(int c)
{
	int	i;

	i = 0;
	while (c)
	{
		if ((c < 'a' || c > 'z')
			&& (c < 'A' || c > 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main ()
{
    unsigned char tab[] = "c";
    printf("resultat %d\n", ft_isalpha(tab[0]));
    return 0;
}*/
