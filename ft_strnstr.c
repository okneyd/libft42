/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:07:57 by ydemyden          #+#    #+#             */
/*   Updated: 2024/07/31 19:42:52 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of the null-terminated string little 
// in the string big, where not more than len characters are searched. 
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[b] != '\0' && b < len)
	{
		if (big[b] == little[0])
		{
			l = 1;
			while (little[l] != '\0' && big[b + l] == little[l]
				&& (b + l) < len)
			{
				l++;
			}
			if (little[l] == '\0')
				return ((char *)big + b);
		}
		b++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *tt = ft_strnstr("Hello, CS50 students!", "CS50", 15);
// 	if (tt != NULL)
// 		printf("%s\n", tt);
// 	else
// 		printf("Substring not found\n");
// 	return (0);
// }