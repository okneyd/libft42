/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:02:44 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/05 19:23:53 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string scanning operation || locate the FIRST occurrence of c
// (converted to a char) in the string pointed to by s.  The
// terminating NUL character is considered to be part of the string.
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				z;
	unsigned char	uc;

	uc = (unsigned char)c;
	z = 0;
	while (s[z] != '\0')
	{
		if (s[z] == uc)
			return ((char *)&s[z]);
		z++;
	}
	if (uc == '\0')
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
