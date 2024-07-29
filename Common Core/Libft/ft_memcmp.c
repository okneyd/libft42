/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 13:21:13 by ydemyden          #+#    #+#             */
/*   Updated: 2024/06/05 19:51:53 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares the first n bytes (each interpreted as unsigned char) 
// > 0, < 0 if s1/s2 is found
// 0 if n = 0
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				z;
	unsigned const char	*ps1;
	unsigned const char	*ps2;

	ps1 = (unsigned const char *)s1;
	ps2 = (unsigned const char *)s2;
	z = 0;
	while (n != z)
	{
		if (ps1[z] > ps2[z])
		{
			return (1);
		}
		else if (ps1[z] < ps2[z])
		{
			return (-1);
		}
		z++;
	}
	return (0);
}

// int main(void)
// {
// 	int tt = ft_memcmp("c\200", "c\0", 2);
// 	printf("%d", tt);
// 	return (0);
// }