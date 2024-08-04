/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:47:49 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/04 18:08:07 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the character ’c’ to the given file descriptor
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main(void)
// {
// 	ft_putchar_fd('A', 1);
// 	return 0;
// }