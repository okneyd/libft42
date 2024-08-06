/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:43:18 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/06 18:55:55 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares  only  the  first (at most) n bytes of s1 and s2
// 0 if the s1 = s2
// negative value if s1 < s2
// positive value if s1 > s2
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				z;
	unsigned const char	*ps1;
	unsigned const char	*ps2;

	ps1 = (unsigned const char *)s1;
	ps2 = (unsigned const char *)s2;
	z = 0;
	while (z < n)
	{
		if (ps1[z] != ps2[z] || ps1[z] == '\0'
			|| ps2[z] == '\0')
		{
			return (ps1[z] - ps2[z]);
		}
		z++;
	}
	return (0);
}

// int main(void)
// {
// 	int tt = ft_strncmp("test\200", "test\0", 6);
// 	printf("%d", tt);
// 	return (0);
// }
