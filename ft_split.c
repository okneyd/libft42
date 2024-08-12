/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydemyden <ydemyden@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:35:51 by ydemyden          #+#    #+#             */
/*   Updated: 2024/08/07 18:36:02 by ydemyden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates and returns an array of strings obtained by 
// splitting ’s’ using the character ’c’ as a delimiter. 
// The array must end with a NULL pointer.
#include "libft.h"

size_t	n_substr(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

size_t	substr_len(char const *s, size_t i, char c)
{
	size_t	len;

	len = 0;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		i++;
		len++;
	}
	return (len);
}

int	*allocation(char const *s, char **str, char c)
{
	size_t	i;
	size_t	x;
	size_t	y;

	i = 0;
	x = 0;
	y = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		y = substr_len(s, i, c);
		str[x] = ft_calloc((y + 1), sizeof(char));
		if (!str[x])
			return (NULL);
		i = i + y;
		if (s[i] != '\0')
			x++;
	}
	return (0);
}

void	copy(char const *s, char **str, char c)
{
	size_t	i;
	size_t	y;
	size_t	x;
	size_t	substr_l;

	i = 0;
	y = 0;
	x = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] == '\0')
			break ;
		substr_l = substr_len(s, i, c);
		y = -1;
		while (++y < substr_l)
		{
			str[x][y] = s[i++];
		}
		str[x++][y] = '\0';
	}
	str[x] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t	substr_n;
	char	**str;

	if (!s)
		return (NULL);
	substr_n = n_substr(s, c);
	if (substr_n == 0)
		return (ft_calloc(1, sizeof(char *)));
	str = ft_calloc((substr_n + 1), sizeof(char *));
	if (!str)
		return (NULL);
	allocation(s, str, c);
	copy(s, str, c);
	return (str);
}

// int main(void)
// {
// 	char *s = "You will do it";
// 	char **str = ft_split(str, 0);
// 	printf ("%s\n", str[0]);
// 	printf ("%s\n", str[1]);
// 	printf ("%s\n", str[2]);
// 	// printf ("%s\n", str[3]);
// 	return (0);
// }