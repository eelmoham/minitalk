/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:16:21 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/15 03:35:54 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	in;
	int	isfind;

	isfind = 0;
	i = 0;
	in = i;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			isfind = 1;
			in = i;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (isfind)
		return ((char *)(s + in));
	return (0);
}
