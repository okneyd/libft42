/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:22:42 by ydemyden          #+#    #+#             */
/*   Updated: 2024/07/31 19:42:22 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fills the first 'n' bytes of memory area pointed to by 's'
// with the argument constant byte 'c'
// || fill a block of memory with a particular value
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	z;
	char	*ps;

	z = 0;
	ps = (char *)s;
	while (n != z)
	{
		ps[z] = c;
		z++;
	}
	return (s);
}

// int main(void)
// {
// 	char str[] = "Yana";
// 	ft_memset(str, 's', 3);
// 	printf("%s", str);
// 	return (0);
// }