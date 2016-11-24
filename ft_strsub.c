/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 06:12:54 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/24 13:03:05 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;

	if ((tmp = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	i = 0;
	while (start < len)
	{
		tmp[i] = s[start];
		i++;
		start++;
	}
	return (tmp);
}
