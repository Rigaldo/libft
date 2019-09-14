/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcountwords.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:42:33 by cburns            #+#    #+#             */
/*   Updated: 2019/09/14 18:42:37 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcountwords(char const *s, char c)
{
	size_t		words;
	size_t		i;

	i = 1;
	words = 1;
	while (s[i])
	{
		if ((s[i] == c && s[i - 1] != c) || (!(s[i + 1]) && s[i] != c))
			words++;
		i++;
	}
	return (words);
}
