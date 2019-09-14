/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 14:27:20 by cburns            #+#    #+#             */
/*   Updated: 2019/09/13 15:24:24 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*tail;

	if (!(alst) || !(del))
		return ;
	current = *alst;
	while (current)
	{
		tail = current->next;
		del(current->content, current->content_size);
		free(current);
		current = tail;
	}
	*alst = NULL;
}
