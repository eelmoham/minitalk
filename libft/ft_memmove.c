/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:28:57 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/17 19:04:24 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (dest);
	if (d < s)
		ft_memcpy(d, s, len);
	else
	{
		while (i < len)
		{
			d[len - i - 1] = s[len - i - 1];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main() {
    char	src[] = "elmohammady";
	char	dest[]="elnehdi";
    printf("%s\n",ft_memmove(dest, src, 50));
	char kkk[] = "elmohammady";
	char lll[]="kkk";
    printf("%s\n", memmove(lll, kkk,5));
    return 0;
}*/
