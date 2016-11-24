/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 06:01:08 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/23 06:11:02 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((i < n) && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if ((i == n) || (s1[i] == '\0') || (s2[i] == '\0'))
		return (1);
	return (0);
}
