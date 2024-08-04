/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:17:49 by ydemyden          #+#    #+#             */
/*   Updated: 2024/07/31 19:42:37 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// used to copy a string and returns its length. It takes the destination 
// string, the source string, and the size of the destination string
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *restrict src, size_t size)
{
	size_t	z;
	size_t	y;

	z = 0;
	y = 0;
	y = ft_strlen(src);
	if (size == 0)
		return (y);
	while (z < (size - 1) && src[z] != '\0')
	{
		dst[z] = src[z];
		z++;
	}
	if (z < size)
		dst[z] = '\0';
	return (y);
}

// int main(void)
// {
// 	char dst[6] = "r";
// 	size_t tt = ft_strlcpy(dst, "lorem ipsum dolor sit amet", 0);
// 	printf("%zu", tt);
// 	printf("%s", dst);
// 	return (0);
// }