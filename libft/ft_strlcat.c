/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelmoham <eelmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:42:13 by eelmoham          #+#    #+#             */
/*   Updated: 2021/11/17 12:38:26 by eelmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	j;
	size_t	len;

	lendst = ft_strlen(dst);
	len = ft_strlen(src);
	if (dstsize <= lendst)
		len += dstsize;
	else
		len += lendst;
	j = 0;
	while (src[j] != '\0' && lendst + 1 < dstsize)
		dst[lendst++] = src[j++];
	dst[lendst] = '\0';
	return (len);
}
/*
int main(void) {

  char dst[100] = "abcd";
  char src[100] = "abcd";

  printf ("// Retourne %lu\n", ft_strlcat(dst, src, 7));
  printf ("// dst = %s\n", dst);
  printf ("// src = %s\n", src);
  return 0;
  // destSize + src or dst len (destsize + great one)
}*/
