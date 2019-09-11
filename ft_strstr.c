/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 01:37:48 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 02:29:59 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	size_t	rez;
	size_t	j;

	rez = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[rez])
	{
		if (s1[rez] == s2[0])
		{
			j = 1;
			while (s1[rez + j] && s2[j] && s1[rez + j] == s2[j])
				j++;
			if (s2[j] == '\0')
				return ((char *)&(s1[rez]));
		}
		rez++;
	}
	return (NULL);
}
