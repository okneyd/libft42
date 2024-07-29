/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:01:39 by ydemyden          #+#    #+#             */
/*   Updated: 2024/05/28 17:00:38 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert lowercase letters to uppercase

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int tt = 'f';
// 	tt = ft_toupper(tt);
// 	printf("%c", tt);
// 	return (0);
// }