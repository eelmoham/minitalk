/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:35:49 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/18 21:20:03 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*
int main()
{
    printf("%d\n", ft_isalnum('a')); //1
    printf("%d\n", ft_isalnum('z')); //1
    printf("%d\n", ft_isalnum('A')); //1
    printf("%d\n", ft_isalnum('Z')); //1
    printf("%d\n", ft_isalnum('0')); //1
    printf("%d\n", ft_isalnum('9')); //1
    printf("%d\n", ft_isalnum('.')); //0
    printf("%d\n", ft_isalnum('/')); //0
    printf("%d\n", ft_isalnum('/n')); //0
}
*/
