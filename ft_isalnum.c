/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:27:58 by ydemyden          #+#    #+#             */
/*   Updated: 2024/05/24 18:20:36 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// identify an alphanumeric character
// ('8' digit (0-9) or a letter (a-z, A-Z);
// '0' a non-alphanumeric)

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tt = ft_isalnum('5');
// 	printf("%d", tt);
// 	return (0);
// }