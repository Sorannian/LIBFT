/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digicount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 02:35:04 by mdupuy            #+#    #+#             */
/*   Updated: 2016/12/02 02:35:11 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_digicount(int n)
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
