/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:16:41 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/04 17:07:27 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function f to each character of the string s, passing 
// its index as the first argument and the character itself as the 
// second. A new string is created to collect the results from 
// the successive applications of f.
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			strlen;
	char			*result;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	strlen = ft_strlen(s);
	result = (char *)malloc(strlen + 1);
	if (!result)
		return (NULL);
	while (i < strlen)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[strlen] = '\0';
	return (result);
}

// char to_upper(unsigned int i, char c) 
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z') 
// 		return c - 32;
// 	return c;
// }
// char to_lower(unsigned int i, char c) 
// {
// 	(void)i;
// 	if (c >= 'A' && c <= 'Z')
// 		return c + 32;
// 	return c;
// }
// char increment_char(unsigned int i, char c) 
// {
// 	(void)i;
// 	return c + 1;
// }
// char replace_char(unsigned int i, char c) 
// {
// 	(void)i;
// 	return '*';
// }
// int main() {
// 	char const *s1 = "hello";
// 	char const *s2 = "WORLD";
// 	char const *s3 = "123";
// 	char *result;	
// 	// Test with to_upper
// 	result = ft_strmapi(s1, to_upper);
// 	if (result) {
// 		printf("Original: %s\nModified (to_upper): %s\n", s1, result);
// 		free(result);
// 	} else {
// 		printf("Error in ft_strmapi (to_upper)!\n");
// 	}	
// 	// Test with to_lower
// 	result = ft_strmapi(s2, to_lower);
// 	if (result) {
// 		printf("Original: %s\nModified (to_lower): %s\n", s2, result);
// 		free(result);
// 	} else {
// 		printf("Error in ft_strmapi (to_lower)!\n");
// 	}	
// 	// Test with increment_char
// 	result = ft_strmapi(s1, increment_char);
// 	if (result) {
// 		printf("Original: %s\nModified (increment_char): %s\n", s1, result);
// 		free(result);
// 	} else {
// 		printf("Error in ft_strmapi (increment_char)!\n");
// 	}	
// 	// Test with replace_char
// 	result = ft_strmapi(s1, replace_char);
// 	if (result) {
// 		printf("Original: %s\nModified (replace_char): %s\n", s1, result);
// 		free(result);
// 	} else {
// 		printf("Error in ft_strmapi (replace_char)!\n");
// 	}	
// 	return 0;
// }