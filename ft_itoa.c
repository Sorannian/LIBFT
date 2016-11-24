/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 13:40:38 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/24 16:35:06 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digicount(int n)
{
	int		res;

	res = 0;
	if (n == -2147483648)
	{
		res += 2;
		n = 147483648;
	}
	if (n < 0)
	{
		res++;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n / 10;
		res++;
	}
	res++;
	return (res);
}

char		*ft_itoa(int n)
{
	char	*dest;
	size_t	j;

	if ((dest = (char*)malloc(sizeof(ft_digicount(n)))) == NULL)
		return (NULL);
	j = ft_digicount(n) - 1;
	if (n < 0)
	{
		n = n * -1;
		dest[0] = '-';
	}
	while (n >= 10)
	{
		dest[j] = (n % 10) + 48;
		n = n / 10;
		j--;
	}
	if (n < 10)
		dest[j] = (n + 48);
	return (dest);
}
