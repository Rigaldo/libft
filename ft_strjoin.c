/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 06:20:03 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 06:43:18 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rez;

	if (!(s1) || !(s2))
		return (NULL);
	if (!(rez = (char *)malloc(sizeof(char) *
		(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	rez = ft_strcpy(rez, s1);
	rez = ft_strcat(rez, s2);
	return (rez);
}
