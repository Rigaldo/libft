/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:26:15 by cburns            #+#    #+#             */
/*   Updated: 2019/09/14 22:09:02 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_dellist(t_list *lst)
{
	t_list	*current;

	while (lst)
	{
		current = lst->next;
		free(lst->content);
		free(lst);
		lst = NULL;
		lst = current;
	}
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*current;
	t_list	*tail;

	if (!(head = (t_list *)malloc(sizeof(t_list)))
		|| !lst || !f)
		return (NULL);
	head = f(lst);
	lst = lst->next;
	current = head;
	while (lst)
	{
		if (!(tail = (t_list *)malloc(sizeof(t_list))))
		{
			ft_dellist(head);
			return (NULL);
		}
		tail = f(lst);
		current->next = tail;
		current = tail;
		lst = lst->next;
	}
	tail->next = NULL;
	return (head);
}
