/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 06:11:14 by cburns            #+#    #+#             */
/*   Updated: 2019/09/06 07:26:15 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	j;

	i = 0;
	while (dest[i] && i < len)
		i++;
	j = i;
	k = 0;
	while (src[k] && i + 1 < len)
		dest[i++] = src[k++];
	if (i < len)
		dest[i] = '\0';
	return (ft_strlen(src) + j);
}
