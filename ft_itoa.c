/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 02:44:54 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 04:50:43 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int n)
{
	size_t			i;
	unsigned int	nbr;

	i = 1;
	if (n < 0)
	{
		i++;
		nbr = (unsigned int)-n;
	}
	else
		nbr = (unsigned int)n;
	while (nbr / 10 > 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char			*s;
	size_t			i;
	unsigned int	tmp;

	i = ft_size(n);
	if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		tmp = (unsigned int)-n;
	}
	else
		tmp = (unsigned int)n;
	s[i] = '\0';
	i--;
	while (tmp > 0)
	{
		s[i] = tmp % 10 + '0';
		tmp /= 10;
		i--;
	}
	if (n == 0)
		s[0] = '0';
	return (s);
}
