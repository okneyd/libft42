/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 18:13:14 by ydemyden          #+#    #+#             */
/*   Updated: 2024/07/31 19:42:42 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calculates the length of a string, not including '\0'
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	z;

	z = 0;
	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}

// int main(void)
// {
// 	size_t tt = ft_strlen("Yana");
// 	printf("%zu", tt);
// 	return (0);
// }