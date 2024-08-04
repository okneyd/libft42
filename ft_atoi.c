/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:12:57 by ydemyden          #+#    #+#             */
/*   Updated: 2024/07/31 18:45:52 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// "ASCII to integer". It converts a string of characters representing 
// an integer into an actual integer value.

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\v'
		|| *nptr == '\f' || *nptr == '\r')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		n = n * 10 + (*nptr - '0');
		nptr++;
	}
	return (n * sign);
}

// int	main(void)
// {
// 	char	*test;

// 	test = "2147483647";
// 	printf("%d", ft_atoi(test));
// 	return (0);
// }
