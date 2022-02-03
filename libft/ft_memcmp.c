/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:04:41 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/09 17:15:39 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	i = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    printf("%d",ft_memcmp("salut", "salut", 5));
    printf("%d",ft_memcmp("t\200", "t\0", 2));
    printf("%d",ft_memcmp("testss", "test", 5));
    printf("%d",ft_memcmp("test", "tEst", 4));
    printf("%d",ft_memcmp("", "test", 4));
    printf("%d",ft_memcmp("test", "", 4));
    printf("%d",ft_memcmp("abcdefghij", "abcdefgxyz", 7));
    printf("%d",ft_memcmp("abcdefgh", "abcdwxyz", 6));
    printf("%d",ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	
}*/
