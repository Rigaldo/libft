/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 21:33:28 by cburns            #+#    #+#             */
/*   Updated: 2019/09/14 21:43:49 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_lstsize(t_list *lst)
{
	size_t	count;
	t_list	*current;

	if (!lst)
		return (0);
	count = 1;
	current = lst;
	while (current->next)
	{
		current = current->next;
		count++;
	}
	return (count);
}
