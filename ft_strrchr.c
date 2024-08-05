/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:23:58 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/05 19:24:07 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string scanning operation || locate the LAST occurrence of c
// (converted to a char) in the string pointed to by s.  The
// terminating NUL character is considered to be part of the string.
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char )c;
	i = 0;
	i = ft_strlen(s);
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	while (i != 0)
	{
		if (s[i - 1] == uc)
		{
			return ((char *)&s[i - 1]);
		}
		i--;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *tt = ft_strrchr("bonjour", 'b');
// 	printf("%p", tt);
// 	printf("%c", *tt);
// 	return (0);
// }
