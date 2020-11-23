/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testbonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 14:10:42 by agraton           #+#    #+#             */
/*   Updated: 2020/11/23 14:41:34 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void ft_lstprint(t_list *lst)
{
	ft_putstr_fd("Current list state:\n", 1);
	int		i;
	i = 0;
	while (lst)
	{
		ft_putstr_fd("Position ", 1);
		ft_putnbr_fd(i, 1);
		ft_putstr_fd(": ", 1);
		ft_putendl_fd(lst->content, 1);
		lst = lst->next;
		i++;
	}
	ft_putstr_fd("End of list\n\n", 1);
}

void	ft_putstr(void *c)
{
	ft_putstr_fd((char *)c, 1);
}

int		main(void)
{
	ft_putstr_fd("Generating basic list\n", 1);
	t_list	*list = ft_lstnew(strdup("Hello"));
	list->next = ft_lstnew(strdup("Hallo!"));
	list->next->next = ft_lstnew(strdup(":D"));
	ft_lstprint(list);
	ft_putstr_fd("ft_lstsize gives: ", 1);
	ft_putnbr_fd(ft_lstsize(list), 1);
	ft_putstr_fd("\nAnd if we send NULL: ", 1);
	ft_putnbr_fd(ft_lstsize(NULL), 1);
	ft_putstr_fd("\n\n", 1);

	ft_putstr_fd("ft_lstlast returs element: ", 1);
	ft_putendl_fd(ft_lstlast(list)->content, 1);

	ft_putstr_fd("\nUsing ft_lstadd_back to add element \":(\"\n", 1);
	ft_putstr_fd("Using ft_lstadd_front to add element \"PPPP\"\n", 1);
	ft_lstadd_back(&list, ft_lstnew(":("));
	ft_lstadd_front(&list, ft_lstnew("PPPP"));
	ft_lstprint(list);

	ft_putstr_fd("Using ft_lstiter with ft_putstr:\n", 1);
	ft_lstiter(list, &ft_putstr);
	ft_putstr_fd("\n\n", 1);

	return (0);
}
