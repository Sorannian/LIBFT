#include <../includes/libft.h>

void *memcpy(void *dest, const void *src, size_t n)
{
	char		*srcpy;
	const char	*destcpy;
	size_t		i;

	srcpy = src;
	destcpy = dest;
	i = 0;
	while (i < n)
	{
		destcpy[i] = srcpy[i];
		i++;
	}
	return (dest);
}
