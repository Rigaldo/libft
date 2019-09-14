/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:41:27 by cburns            #+#    #+#             */
/*   Updated: 2019/09/14 18:49:40 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddend(t_list **head, t_list *node)
{
	t_list	*current;

	if (!(*head))
		*head = node;
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		current->next = node;
	}
}
