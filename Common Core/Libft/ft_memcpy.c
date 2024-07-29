/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:20:42 by ydemyden          #+#    #+#             */
/*   Updated: 2024/05/26 19:21:32 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies n bytes from memory area src to memory area dest.
// The memory areas must not overlap (for overlaps is memmove)
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		z;
	char		*pdest;
	const char	*psrc;

	z = 0;
	pdest = (char *)dest;
	psrc = (const char *)src;
	while (n > z)
	{
		pdest[z] = psrc[z];
		z++;
	}
	return (dest);
}

// int main(void)
// {
// 	char source[] = "YanaDemi";
// 	int n = 4;
// 	char destination[n + 1];
// 	ft_memcpy(destination, source, n);
// 	destination[n] = '\0';
// 	printf("%s\n", source);
// 	printf("%s", destination);
// 	return (0);
// }
