/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 03:59:37 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/27 14:48:32 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;
	size_t	i;

	if ((tmp = (char*)malloc(size + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tmp[i] = '\0';
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
