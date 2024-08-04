/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:53:04 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/04 18:08:14 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the given file descriptor
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// int main(void)
// {
// 	ft_putstr_fd("AstonMartin", 1);
// 	return 0;
// }