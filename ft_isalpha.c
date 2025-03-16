int	ft_isalpha(unsigned char *tab)
{
    int	i;

    i = 0;
    while (tab[i])
    {
        if ((tab[i] < 'a' || tab[i] > 'z') && 
            (tab[i] < 'A' || tab[i] > 'Z'))
            return (0);
        i++;
    }
    return (1);
}
/*#include <stdio.h>
int main ()
{
    unsigned char tab[] = "coucou";
    printf("resultat %d\n", ft_isalpha(tab));
    return 0;
}*/
