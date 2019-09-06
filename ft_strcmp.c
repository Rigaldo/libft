/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 04:26:52 by cburns            #+#    #+#             */
/*   Updated: 2019/09/06 07:25:18 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i]) && (s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
