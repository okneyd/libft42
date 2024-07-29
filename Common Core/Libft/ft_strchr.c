/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:02:44 by ydemyden          #+#    #+#             */
/*   Updated: 2024/06/09 19:05:01 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string scanning operation || locate the FIRST occurrence of c
// (converted to a char) in the string pointed to by s.  The
// terminating NUL character is considered to be part of the string.
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	z;

	z = 0;
	while (s[z] != '\0')
	{
		if (s[z] == c)
			return ((char *)&s[z]);
		z++;
	}
	if (c == '\0')
		return ((char *)&s[z]);
	return (NULL);
}

// int main(void)
// {
// 	char *tt = ft_strchr("bonjour", '\0');
// 	printf("%p", tt);
// 	printf("%c", *tt);
// 	return (0);
// }
// int main(void)
// {
// 	printf("%s", ft_strchr("bonjour", 'j'));
// 	//printf("%c", *tt);
// 	return (0);
// }
