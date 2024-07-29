/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 20:06:12 by ydemyden          #+#    #+#             */
/*   Updated: 2024/05/24 18:18:34 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// identify a digit 
// ('1' a digit; '0' is not)

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tt = ft_isdigit ('+');
// 	printf("%d", tt);
// 	return (0);
// }