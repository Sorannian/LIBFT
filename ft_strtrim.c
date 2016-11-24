/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdupuy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 07:32:36 by mdupuy            #+#    #+#             */
/*   Updated: 2016/11/24 16:56:18 by mdupuy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = -1;
	while (s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
		len--;
	while ((s[++i] == ' ') || (s[i] != '\n') || (s[i] == '\t'))
		len--;
	if (len <= 0)
		len = 0;
	if ((tmp = (char*)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	s += i;
	i = -1;
	while (++i < len)
		tmp[i] = *s++;
	tmp[i] = '\0';
	return (tmp);
}
