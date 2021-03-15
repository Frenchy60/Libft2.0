/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:42:33 by agraton           #+#    #+#             */
/*   Updated: 2021/03/15 11:20:45 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*lstmap_rec(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*cont;

	if (!lst)
		return (NULL);
	if (!f)
		cont = lst->content;
	else if (!(cont = f(lst->content)))
		return (NULL);
	if (!(new = ft_lstnew(cont)))
	{
		if (del && f)
			del(cont);
		return (NULL);
	}
	new->next = lstmap_rec(lst->next, f, del);
	return (new);
}

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	new = lstmap_rec(lst, f, del);
	if (ft_lstsize(new) == ft_lstsize(lst))
		return (new);
	ft_lstclear(&new, (f) ? del : NULL);
	return (NULL);
}
