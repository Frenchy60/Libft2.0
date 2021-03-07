/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:42:33 by agraton           #+#    #+#             */
/*   Updated: 2021/03/07 10:13:09 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*lstmap_rec(t_list *lst, void *(*f)(void *))
{
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	if (!(new = ft_lstnew(f(lst->content))))
		return (NULL);
	new->next = lstmap_rec(lst->next, f);
	return (new);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	new = lstmap_rec(lst, f);
	if (ft_lstsize(new) == ft_lstsize(lst))
		return (new);
	ft_lstclear(&new, del);
	return (NULL);
}
