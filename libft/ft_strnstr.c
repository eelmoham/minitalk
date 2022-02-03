/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:53:30 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/08 16:59:48 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_strwl(char *haystack)
{
	size_t	i;

	i = 0;
	while (haystack[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tolenght;
	char	*myhaystack;
	char	*myneedle;

	myhaystack = (char *)haystack;
	myneedle = (char *)needle;
	tolenght = ft_strwl(myneedle);
	i = 0;
	j = 0;
	if (tolenght == 0)
		return (myhaystack);
	while (myhaystack[i] && i < len)
	{
		while ((myhaystack[i + j] == myneedle[j]) && j + i < len)
		{
			if (j + 1 == tolenght)
				return (myhaystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
int main()
{
    printf("%s",ft_strnstr("mehdi","e",5));
}
*/
