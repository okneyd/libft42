/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:36:37 by ydemyden          #+#    #+#             */
/*   Updated: 2024/07/31 19:42:19 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies n bytes from memory area src to memory area dest
// using a temporary array. The memory areas may overlap
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		z;
	char		*pdest;
	const char	*psrc;

	pdest = (char *)dest;
	psrc = (const char *)src;
	z = 0;
	if (pdest < psrc)
	{
		while (z < n)
		{
			pdest[z] = psrc[z];
			z++;
		}
	}
	z = n;
	if (pdest > psrc)
	{
		while (z > 0)
		{
			pdest[z - 1] = psrc[z - 1];
			z--;
		}
	}
	return (dest);
}

// int main(void)
// {
// 	char source[] = "LaLaLand";
// 	int n = 8;
// 	char destination[n + 1];
// 	ft_memmove(destination, source, n);
// 	destination[n] = '\0';
// 	printf("%s\n", source);
// 	printf("%s", destination);
// 	return (0);
// }
