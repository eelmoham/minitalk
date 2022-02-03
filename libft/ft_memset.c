/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:53:05 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/09 21:52:58 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	ch;
	char			*str;

	ch = (unsigned char)c;
	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}
/*
int main() {
    char m[] = "mehdi ";
    ft_memset(m, 's', 3);
    printf("%s",ft_memset(m,'3',5));
    return 0;
}*/
