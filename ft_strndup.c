/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 06:00:11 by mdupuy            #+#    #+#             */
/*   Updated: 2016/12/07 06:00:20 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char *tmp;

	if (!(tmp = malloc(sizeof(char) * n + 1)))
		return (NULL);
	ft_strlcpy(tmp, s, n + 1);
	return (tmp);
}
