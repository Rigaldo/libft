/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 07:50:11 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 00:56:05 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *s)
{
	unsigned long	rez;
	unsigned long	maxval;
	size_t			i;
	int				sign;

	i = 0;
	sign = 1;
	rez = 0;
	maxval = 922337203685477580;
	while (s[i] == '\n' || s[i] == ' ' || s[i] == '\t'
		|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '-')
		sign = -1;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		if ((rez > maxval || (rez == maxval && (s[i] - '0') > 7)) && sign == 1)
			return (-1);
		if ((rez > maxval || (rez == maxval && (s[i] - '0') > 8)) && sign == -1)
			return (0);
		rez = rez * 10 + (s[i++] - '0');
	}
	return ((int)rez * sign);
}
