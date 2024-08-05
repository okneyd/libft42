/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:13:51 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/05 17:53:23 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to a new string which is
// a duplicate of the string s.
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	l;
	char	*dplct;

	l = ft_strlen(s) + 1;
	dplct = malloc(l);
	if (s == 0)
		return (NULL);
	else if (dplct != NULL)
		ft_memcpy(dplct, s, l);
	return (dplct);
}

// int main() {
// 	const char *original = "why we are doing this";
// 	char *copy = ft_strdup(original);	
// 	if (copy != NULL)
// 	{
// 		printf("Original: %s\n", original);
// 		printf("Copy: %s\n", copy);
// 		free(copy);
// 	} else
// 		printf("Memory allocation failed\n");
// 	return 0;
// }