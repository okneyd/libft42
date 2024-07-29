/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 14:31:49 by ydemyden          #+#    #+#             */
/*   Updated: 2024/06/01 15:40:50 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locates the first occurrence of the null-terminated string little 
// in the string big, where not more than len characters are searched.
// Characters after ‘\0’ character are not searched.
#include <stdio.h>
 
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	
}

// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		i++;
// 	}
// 	if (c == '\0')
// 	{
// 		return ((char *)&s[i]);
// 	}
// 	while (i != 1)
// 	{
// 		if (s[i - 1] == c)
// 		{
// 			return ((char *)&s[i - 1]);
// 		}
// 		i--;
// 	}
// 	return (NULL);
// }

// // int main(void)
// // {
// // 	char *tt = ft_strrchr("BooB", 'B');
// // 	printf("%p", tt);
// // 	printf("%c", *tt);
// // 	return (0);
// // }