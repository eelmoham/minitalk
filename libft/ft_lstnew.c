/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 19:44:52 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/16 21:26:50 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first_list;

	first_list = (t_list *)malloc(sizeof(t_list));
	if (first_list == NULL)
		return (NULL);
	first_list->content = content;
	first_list->next = NULL;
	return (first_list);
}
/*
int main()
{
    t_list *p;
    p = ft_lstnew("mehdi");
}*/
