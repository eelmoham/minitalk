/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 19:30:12 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/16 19:31:49 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (lst == NULL)
		return (NULL);
	while (current->next)
		current = current->next;
	return (current);
}
/*
int main()
{
	t_list **lst = malloc (sizeof(t_list *));
	t_list *Node1 = ft_lstnew("soufiane");
	t_list *Node2 = ft_lstnew("Mehdi");
	t_list *Node3 = ft_lstnew("Musk");

	*lst = NULL;
	ft_lstadd_front (lst,Node1);
	ft_lstadd_front (lst, Node2);
	ft_lstadd_front (lst, Node3);
	while ((*lst))
	{
		printf("%s \n",(char *)(*lst)->content);
		(*lst) = (*lst)->next;
	}
}*/
