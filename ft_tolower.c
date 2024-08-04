/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:23:56 by ydemyden          #+#    #+#             */
/*   Updated: 2024/05/28 17:01:12 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert uppercase letters to lowercase

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	int tt = 'L';
// 	tt = ft_tolower(tt);
// 	printf("%c", tt);
// 	return (0);
// }