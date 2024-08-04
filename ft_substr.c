/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:49:41 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/03 14:12:03 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len'
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	strlen;
	char	*substr;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (strlen <= start)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	if (strlen - start < len)
		len = strlen - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

// int main(void) 
// {
// 	char *result;
// 	result = ft_substr("Skoda Octaviaaa", 6, 7);
// 	printf("Test 1: %s\n", result);
// 	free(result);	
// 	result = ft_substr("Skoda Octaviaaa", 20, 5);
// 	printf("Test 2: %s\n", result);
// 	free(result);	
// 	result = ft_substr("Skoda Octaviaaa", 6, 20);
// 	printf("Test 3: %s\n", result);
// 	free(result);
// 	result = ft_substr("", 0, 5);
// 	printf("Test 4: %s\n", result);
// 	free(result);	
// 	result = ft_substr(NULL, 0, 5);
// 	if (result == NULL)
// 		printf("Test 5: NULL\n");
// 	else 
// 	{
// 		printf("Test 5: %s\n", result);
// 		free(result);
// 	}
// 	return 0;
// }