/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:26:33 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/03 18:02:46 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates and returns a copy of ’s1’ with the characters specified
// in ’set’ removed from the beginning and the end of the string.
#include "libft.h"

int	inset(char x, const char *set)
{
	while (*set)
	{
		if (x == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*emptycheck(void)
{
	char	*empty;

	empty = (char *)malloc(1);
	if (empty)
		*empty = '\0';
	return (empty);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trm;
	size_t	start;
	size_t	end;
	size_t	lentrm;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && inset(s1[start], set))
		start++;
	if (s1[start] == '\0')
		return (emptycheck());
	end = ft_strlen(s1);
	while (end > start && inset(s1[end - 1], set))
		end--;
	lentrm = end - start;
	trm = (char *)malloc(lentrm + 1);
	if (!trm)
		return (NULL);
	ft_strlcpy(trm, &s1[start], ((end + 1) - start));
	trm[lentrm] = '\0';
	return (trm);
}

// int main() {
// 	char *result;	
// 	result = ft_strtrim("   \t\nHello, World!   \t\n", " \t\n");
// 	if (result) {
// 		printf("Trimmed string: '%s'\n", result);
// 		free(result);
// 	} else {
// 		printf("Memory allocation failed or invalid input.\n");
// 	}	
// 	return 0;
// }