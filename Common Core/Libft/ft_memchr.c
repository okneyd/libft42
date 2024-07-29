/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 21:08:31 by ydemyden          #+#    #+#             */
/*   Updated: 2024/06/01 15:45:47 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// scan the first n bytes of the memory area pointed to by the void 
// pointer for the first occurrence of the character c. It returns a 
// pointer to the matching byte or NULL if character does not occur
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		z;
	const char	*ps;

	z = 0;
	ps = (const char *)s;
	while (z < n)
	{
		if (ps[z] == c)
		{
			return ((void *)&ps[z]);
		}
		z++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *tt = ft_memchr("Dead mthfkr", 'm', 10);
// 	printf("%p", tt);
// 	// NOT FOR NULL
// 	// printf("%c", *tt);
// 	return (0);
// }
