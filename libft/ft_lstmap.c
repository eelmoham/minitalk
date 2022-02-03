/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:27:11 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/16 21:16:29 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*t;

	t = NULL;
	while (lst)
	{
		ft_lstadd_back(&t, ft_lstnew(f(lst->content)));
		if (!t)
			ft_lstclear(&t, del);
		lst = lst->next;
	}
	return (t);
}
