#include <../includes/libft.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != (char)c && s[i] != '\0')
		s++;
	if (s[i] == (char)c)
		return ((char *)s);
	return (NULL);
}
