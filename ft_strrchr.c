/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 18:23:58 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/06 19:01:45 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string scanning operation || locate the LAST occurrence of c
// (converted to a char) in the string pointed to by s.  The
// terminating NULL character is considered to be part of the string.
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == uc)
			return ((char *)&s[i]);
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
