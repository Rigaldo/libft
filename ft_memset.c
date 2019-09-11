/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 02:06:50 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 01:08:09 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*sym;
	size_t			i;

	sym = (unsigned char *)dest;
	i = 0;
	while (i < n)
		sym[i++] = (unsigned char)c;
	return (dest);
}
