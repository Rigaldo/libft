/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 06:45:24 by cburns            #+#    #+#             */
/*   Updated: 2019/09/12 16:27:22 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*rez;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] && (s[start] == ' '
		|| s[start] == '\n' || s[start] == '\t'))
		start++;
	end = (size_t)ft_strlen(s) - 1;
	while (end > start && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	i = 0;
	if (!(rez = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	if (s[0])
		while (start <= end)
			rez[i++] = s[start++];
	rez[i] = '\0';
	return (rez);
}
