/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:43:10 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/03 14:51:07 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates and returns a new string,
// which is the result of the concatenation of ’s1’ and ’s2’
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*comb;
	size_t	lens1;
	size_t	lens2;
	size_t	summary;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	summary = lens1 + lens2;
	comb = (char *)malloc(summary + 1);
	if (!comb)
		return (NULL);
	ft_memcpy(comb, s1, lens1);
	ft_memcpy(comb + lens1, s2, lens2);
	comb[summary] = '\0';
	return (comb);
}

// int	main() {
// 	// Test cases
// 	char *result;	
// 	// Test 1: Normal case
// 	result = ft_strjoin("Hello, ", "World!");
// 	if (result) {
// 		printf("Test 1: %s\n", result);
// 		free(result);
// 	} else {
// 		printf("Test 1: NULL\n");
// 	}	
// 	// Test 2: Empty first string
// 	result = ft_strjoin("", "World!");
// 	if (result) {
// 		printf("Test 2: %s\n", result);
// 		free(result);
// 	} else {
// 		printf("Test 2: NULL\n");
// 	}	
// 	// Test 3: Empty second string
// 	result = ft_strjoin("Hello, ", "");
// 	if (result) {
// 		printf("Test 3: %s\n", result);
// 		free(result);
// 	} else {
// 		printf("Test 3: NULL\n");
// 	}	
// 	// Test 4: Both strings empty
// 	result = ft_strjoin("", "");
// 	if (result) {
// 		printf("Test 4: %s\n", result);
// 		free(result);
// 	} else {
// 		printf("Test 4: NULL\n");
// 	}	
// 	// Test 5: Null first string
// 	result = ft_strjoin(NULL, "World!");
// 	if (result) {
// 		printf("Test 5: %s\n", result);
// 	} else {
// 		printf("Test 5: NULL\n");
// 	}	
// 	// Test 6: Null second string
// 	result = ft_strjoin("Hello, ", NULL);
// 	if (result) {
// 		printf("Test 6: %s\n", result);
// 	} else {
// 		printf("Test 6: NULL\n");
// 	}	
// 	// Test 7: Both strings null
// 	result = ft_strjoin(NULL, NULL);
// 	if (result) {
// 		printf("Test 7: %s\n", result);
// 	} else {
// 		printf("Test 7: NULL\n");
// 	}	
// 	return 0;
// }