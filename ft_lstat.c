/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:39:13 by cburns            #+#    #+#             */
/*   Updated: 2019/09/14 22:08:00 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstat(t_list *alst, size_t n)
{
	size_t	count;
	t_list	*current;

	if (!alst)
		return (NULL);
	count = 0;
	current = alst;
	while (count < n)
	{
		if (!current)
			return (NULL);
		current = current->next;
		count++;
	}
	return (current);
}
