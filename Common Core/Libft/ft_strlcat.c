/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:18:54 by ydemyden          #+#    #+#             */
/*   Updated: 2024/06/09 19:06:37 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// used to copy a str to dst and returns their (both) length. 
// It takes the destination string, the source string, and the size 
// of the destination string
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	z;
	size_t	i;
	size_t	l;

	z = 0;
	i = 0;
	l = 0;
	i = ft_strlen(src);
	l = ft_strlen(dst);
	while ((l + z) < (size - 1) && src[z] != '\0'
		&& size != 0)
	{
		dst[l + z] = src[z];
		z++;
	}
	if (size < l)
		return (size + i);
	dst[l + z] = '\0';
	return (i + l);
}

// int main(void)
// {
// 	char *dst = "rrrrrrrrrrrrrrr";
// 	size_t tt = ft_strlcat(dst, "lorem ipsum dolor sit amet", 5);
// 	printf("%zu\n", tt);
// 	printf("%s", dst);
// 	return (0);
// }
	// if (size > l)