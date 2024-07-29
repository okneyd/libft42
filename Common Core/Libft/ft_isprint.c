/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:59:22 by ydemyden          #+#    #+#             */
/*   Updated: 2024/05/24 19:46:19 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks for any printable character including space
// ('1' yes; '0' non)

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tt = ft_isprint(' ');
// 	printf("%d", tt);
// 	return (0);
// }