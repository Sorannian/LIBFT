#include <../includes/libft.h>

char	*ft_strncpy(char *src, const char *dest, size_t n)
{
	size_t i;

	i = 0;
	while (src[i] != '\0' && i(i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
