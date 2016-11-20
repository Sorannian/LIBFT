#include <../includes/libft.h>

void	bzero(void *s, size_t n)
{
	char	*ptr;
	int	i;

	ptr = s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
