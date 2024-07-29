/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:08:03 by ydemyden          #+#    #+#             */
/*   Updated: 2024/05/27 18:59:44 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// erases the data in the n bytes of the memory
// starting at the location pointed to by s, by writing zeros 
// (bytes containing '\0') to that area
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	z;
	char	*ps;

	z = 0;
	ps = (char *)s;
	while (n != 0)
	{
		ps[z] = 0;
		z++;
		n--;
	}
}

// #include <string.h>
// int main(void)
// {
// 	char str[] = "Yana";
// 	int len = strlen(str);
// 	ft_bzero(str, len);
// 	for (int i = 0; i < len; i++) 
// 	{
// 		printf("%d ", (int)str[i]);
// 	}
// 	return 0;
// }