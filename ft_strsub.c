/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 06:12:37 by cburns            #+#    #+#             */
/*   Updated: 2019/09/14 22:17:45 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*rez;

	if (!s || start > (unsigned int)ft_strlen(s))
		return (NULL);
	if (!(rez = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	j = (size_t)start;
	while (s[j] && i < len)
	{
		rez[i] = s[j];
		i++;
		j++;
	}
	rez[i] = '\0';
	return (rez);
}
