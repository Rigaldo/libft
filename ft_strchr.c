/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 01:21:58 by cburns            #+#    #+#             */
/*   Updated: 2019/09/14 22:13:52 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;
	char	*rez;

	rez = (char *)str;
	i = 0;
	while (rez[i])
	{
		if (rez[i] == ch)
			return (&rez[i]);
		i++;
	}
	if (ch == 0)
		return (&rez[i]);
	return (NULL);
}
