#include <../includes/libft.h>

int	ft_atoi(const char *src)
{
	size_t	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (src[i] >= 9 && src[i] <= 13 || src[i] == ' ')
		i++;
	if (src[i] == '-' || src[i] == '+')
	{
		if (src[i] == '-')
			sign = -1;
		i++;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		res = (res * 10) + (src[i] - 48);
		i++;
	}
	return (res * sign);
}
