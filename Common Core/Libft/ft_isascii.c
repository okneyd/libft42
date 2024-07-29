/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:53:39 by ydemyden          #+#    #+#             */
/*   Updated: 2024/05/24 18:18:31 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks if the character is within the ASCII range
// ('1' yes; '0' not)

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tt = ft_isascii('5');
// 	printf("%d", tt);
// 	return (0);
// }