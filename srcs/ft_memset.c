#include <../includes/libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	ptr = b;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
