/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:11:48 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/04 18:25:47 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the integer ’n’ to the given file descriptor
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*str;

	str = ft_itoa(n);
	if (str)
	{
		write(fd, str, ft_strlen(str));
		free(str);
	}
}

// int main(void)
// {
// 	ft_putnbr_fd(12345, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(-6789, 1);
// 	write(1, "\n", 1);
// 	ft_putnbr_fd(0, 1);
// 	write(1, "\n", 1);
// 	return 0;
// }