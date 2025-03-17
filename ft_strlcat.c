unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dsize)
{
	unsigned int	i;
	unsigned int	len_src;
	unsigned int	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (dsize <= len_dst)
		return (len_src + dsize);
	while (src[i] && (i + len_dst) < (dsize - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[i + len_dst] = '\0';
	if (len_dst + len_src >= dsize)
		return (len_src + dsize);
	return (len_src + len_dst);
}
/*
#include <stdio.h>
int main (void)
{
	const char a[] = " les amis";
	char b[] =  "coucou";
	ft_strlcat(b, a, 11);
	printf("la chaine concatene : %s\n", b);
	return (0);
}*/