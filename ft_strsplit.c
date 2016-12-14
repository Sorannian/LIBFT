/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 11:50:41 by mdupuy            #+#    #+#             */
/*   Updated: 2016/12/07 05:58:59 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	char	**tab;
	char	**tmp;

	if (!s)
		return (NULL);
	if (!(tmp = (char**)malloc(sizeof(char*) * (ft_countn(s, c) + 1))))
		return (NULL);
	tab = tmp;
	tmp[ft_countn(s, c)] = NULL;
	while (*s && tmp)
	{
		i = 0;
		while (s[i] != c && s[i])
			i++;
		if (i)
		{
			*tmp = ft_strndup(s, i);
			s = s + i;
			tmp++;
		}
		while (*s == c)
			s++;
	}
	return (tab);
}
