/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 01:08:36 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 01:37:09 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t lenght)
{
	size_t			i;
	unsigned char	*sym;

	sym = (unsigned char *)dest;
	i = 0;
	while (i < lenght)
		sym[i++] = '\0';
}
