/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:39:13 by cburns            #+#    #+#             */
/*   Updated: 2019/09/14 21:43:41 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstat(t_list *head, size_t n)
{
	size_t	count;
	t_list	*current;

	if (!head)
		return (NULL);
	count = 0;
	while (count < n)
	{
		if (!current)
			return (NULL);
		current = current->next;
		count++;
	}
	return (current);
}
