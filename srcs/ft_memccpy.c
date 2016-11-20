#include <../includes/libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*destcpy;
	const char	*srcpy;
	size_t		i;

	destcpy = dest;
	srcpy = src;
	i = 0;
	while (i < n && srcpy[i] != c)
	{
		destcpy[i] = srcpy[i];
		i++;
	}
	return (dest);
}
