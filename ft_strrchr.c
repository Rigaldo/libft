/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 01:32:37 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 01:37:07 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;
	size_t	k;
	int		trigger;
	char	*rez;

	rez = (char *)str;
	i = 0;
	k = 0;
	trigger = 0;
	while (rez[i])
	{
		if (rez[i] == ch)
		{
			k = i;
			trigger++;
		}
		i++;
	}
	if (ch == 0)
		return (&(rez[i]));
	if (trigger > 0)
		return (&(rez[k]));
	return (NULL);
}
