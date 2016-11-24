/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 03:45:14 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/24 13:00:27 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*tmp;
	size_t	i;

	if ((tmp = (char*)malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
