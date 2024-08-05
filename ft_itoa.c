/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:16:21 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/05 19:18:46 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates and returns a string representing the integer received 
// as an argument.Negative numbers must be handled.
#include "libft.h"

int	 counting(int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	
}





char	*convertion(int y, int copy, int nmb, char *str)
{
	while (copy)
	{
		copy = copy / 10;
		nmb++;
	}
	if (y < 0)
		nmb++;
	str = (char *)malloc(nmb + 1);
	if (!str)
		return (NULL);
	if (y == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (y < 0)
	{
		str[0] = '-';
		y = -y;
	}
	str[nmb] = '\0';
	nmb--;
	while (y != 0)
	{
		str[nmb] = (y % 10) + '0';
		y = y / 10;
		nmb--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		y;
	int		nmb;
	int		copy;
	char	*str;

	y = n;
	nmb = 0;
	copy = y;
	str = NULL;
	if (y == 0)
	{
		str = malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (convertion(y, copy, nmb, str));
}

// int main()
// {
// 	char *result;	
// 	result = ft_itoa(12345);
// 	if (result)
// 	{
// 		printf("Result of ft_itoa(12345): %s\n", result);
// 		free(result);
// 	}	
// 	result = ft_itoa(-12345);
// 	if (result)
// 	{
// 		printf("Result of ft_itoa(-12345): %s\n", result);
// 		free(result);
// 	}	
// 	result = ft_itoa(0);
// 	if (result)
// 	{
// 		printf("Result of ft_itoa(0): %s\n", result);
// 		free(result);
// 	}	
// 	result = ft_itoa(-2147483648);
// 	if (result)
// 	{
// 		printf("Result of ft_itoa(-2147483648): %s\n", result);
// 		free(result);
// 	}	
// 	return 0;
// }