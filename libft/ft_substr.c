/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:17:59 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/17 19:23:32 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	ln;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	ln = ft_strlen(s);
	if (start >= ln)
		return (ft_strdup(""));
	if (len >= ln - start)
		ptr = (char *)malloc(ln - start + 1);
	else
		ptr = (char *)malloc(len + 1);
	if (ptr == 0)
		return (0);
	while (s[start] != 0 && i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
int main()
{
	char	str[] = "lorem ipsum dolor sit amet";
	printf("%s",ft_substr(str,7,10));
}*/
