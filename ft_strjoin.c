/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 06:25:06 by mdupuy            #+#    #+#             */
/*   Updated: 2016/12/02 07:42:57 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	j;

	if (!(s1 && s2))
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if ((tmp = (char *)malloc(sizeof(char) * (s1len + s2len) + 1)) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		tmp[i++] = s2[j++];
	tmp[i] = '\0';
	return (tmp);
}
