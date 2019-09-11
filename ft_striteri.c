/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 05:42:30 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 05:46:17 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!(s) || !(f))
		return ;
	i = 0;
	while (s[i])
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
