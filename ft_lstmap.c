/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:42:33 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 13:47:50 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return (NULL);
	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->content = f(lst->content);
	new->content_size = lst->content_size;
	new->next = ft_lstmap(lst->next, f, del);
	return (new);
}
