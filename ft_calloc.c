/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:12:51 by ydemyden          #+#    #+#             */
/*   Updated: 2024/07/30 19:12:51 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocates memory dynamically to variables at runtime.
// It stands for "contiguous allocation". 
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	total = nmemb * size;
	if (size <= 0 || nmemb <= 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if (total / size != nmemb)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_memset (ptr, 0, total);
	return (ptr);
}

// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	int *arr = ft_calloc(5, sizeof(int));
// 	if (arr == NULL)
// 	{
// 		printf("Memory allocation failed.\n");
// 		return 1;
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		if (arr[i] != 0)
// 		{
// 			printf("Memory not set to zero.\n");
// 			return 1;
// 		}
// 	}
// 	printf("Function works correctly.\n");
// 	free(arr);
// 	return(0);
// }