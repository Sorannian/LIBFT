/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 05:40:34 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/24 13:01:44 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*tmp;
	int		i;
	int		j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		tmp = (char *)malloc(sizeof(*tmp) * j);
		while (s[i] != '\0')
		{
			tmp[i] = f(i, s[i]);
			i++;
		}
		return (tmp);
	}
	return (NULL);
}
