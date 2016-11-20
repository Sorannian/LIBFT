#include <../includes/libft.h>

char	*ft_strdup(const char *s)
{
	int		i;
	const char	*dest;	

	i = 0;
	dest = (char*)malloc(sizeof(char) * ft_strlen(s));
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
