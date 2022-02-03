/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:31:43 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/18 22:00:25 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*st;

	str = (char *)dst;
	st = (char *)src;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		str[i] = st[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char d[9];
    
    printf("%s",ft_memcpy(d,"mehdi",9));
}*/
