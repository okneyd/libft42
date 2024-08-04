/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:03:27 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/04 18:11:34 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the string ’s’ to the given file descriptor followed 
// by a newline
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}

// int main(void)
// {
// 	ft_putendl_fd("AstonMartin", 1);
// 	return 0;
// }