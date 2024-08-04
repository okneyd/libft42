/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:10:59 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/04 17:25:24 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Applies the function ’f’ on each character of the string passed 
// as argument, passing its index as first argument. Each character 
// is passed by address to ’f’ to be modified if necessary.

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include "libft.h"
// #include <ctype.h> 
// void to_uppercase(unsigned int index, char *c) 
// {
// 	(void)index;
// 	*c = toupper((unsigned char)*c);
// }

// int main() 
// {
// 	char str[] = "hello world";	
// 	printf("Original string: %s\n", str);
// 	ft_striteri(str, to_uppercase);
// 	printf("Modified string: %s\n", str);	
// 	return 0;
// }