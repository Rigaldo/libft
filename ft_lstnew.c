/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cburns <cburns@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 12:55:14 by cburns            #+#    #+#             */
/*   Updated: 2019/09/13 13:08:45 by cburns           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*element;

	if (!(element = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		element->content = NULL;
		element->content_size = 0;
	}
	else
	{
		if (!(element->content = malloc(content_size)))
		{
			free(element);
			return (NULL);
		}
		element->content = ft_memcpy(element->content, content, content_size);
		element->content_size = content_size;
	}
	element->next = NULL;
	return (element);
}
