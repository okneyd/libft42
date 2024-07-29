/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:57:22 by ydemyden          #+#    #+#             */
/*   Updated: 2024/05/24 18:19:57 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// identify an alphabetic character
// ('1' an alphabetic character; '0' a non-alphabetic)

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tt = ft_isalpha('A');
// 	printf("%d", tt);
// 	return (0);
// }