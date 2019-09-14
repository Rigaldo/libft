/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:38:48 by cburns            #+#    #+#             */
/*   Updated: 2019/09/14 22:11:39 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	if (s2 >= s1)
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	else
	{
		i = 1;
		while (i <= n)
		{
			s1[n - i] = s2[n - i];
			i++;
		}
	}
	return (dest);
}
