/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 12:26:50 by cburns            #+#    #+#             */
/*   Updated: 2019/09/11 13:21:48 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	int			words;
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

static char		*ft_new_word(const char *s, char c, size_t *i)
{
	int			count;
	char		*str;
	size_t		j;
	size_t		k;

	count = 0;
	while (s[*i] && s[*i] == c)
		*i += 1;
	j = *i;
	while (s[j] && s[j] != c)
	{
		count++;
		j++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	k = 0;
	while (*i < j)
	{
		str[k++] = s[*i];
		*i += 1;
	}
	str[k] = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t		i;
	char		**mass;
	int			words;
	int			count;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	if (!(mass = (char **)malloc(sizeof(char *) * words)))
		return (NULL);
	count = 0;
	i = 0;
	while (count < words - 1)
		if (!(mass[count++] = ft_new_word(s, c, &i)))
			return (NULL);
	mass[count] = NULL;
	return (mass);
}
