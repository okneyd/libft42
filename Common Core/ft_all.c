
int	ft_isdigit(int c)
	// identify a digit 
	// ('1' a digit; '0' is not)
	{
		if (c >= 48 && c <= 57)
			return (1);
		else
			return (0);
	}

	#include <stdio.h>
	int	main(void)
	{
		int tt = ft_isdigit ('+');
		printf("%d", tt);
		return (0);
	}

int	ft_isalpha(int c)
	// identify an alphabetic character
	// ('1' an alphabetic character; '0' a non-alphabetic)
	{
		if ((c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
			return (1);
		else
			return (0);
	}

	#include <stdio.h>
	int	main(void)
	{
		int tt = ft_isalpha('A');
		printf("%d", tt);
		return (0);
	}

int	ft_isalnum(int c)
	// identify an alphanumeric character
	// ('8' digit (0-9) or a letter (a-z, A-Z);
	// '0' a non-alphanumeric)
	{
		if ((c >= 48 && c <= 57)
			|| (c >= 65 && c <= 90)
			|| (c >= 97 && c <= 122))
			return (1);
		else
			return (0);
	}

	#include <stdio.h>
	int	main(void)
	{
		int tt = ft_isalnum('5');
		printf("%d", tt);
		return (0);
	}


int	ft_isascii(int c)
	// checks if the character is within the ASCII range
	// ('1' yes; '0' not)
	{
		if ((c >= 0 && c <= 127))
			return (1);
		else
			return (0);
	}

	#include <stdio.h>
	int	main(void)
	{
		int tt = ft_isascii('5');
		printf("%d", tt);
		return (0);
	}

int	ft_isprint(int c)
	// checks for any printable character including space
	// ('1' yes; '0' non)
	{
		if ((c >= 32 && c <= 126))
			return (1);
		else
			return (0);
	}

	#include <stdio.h>
	int	main(void)
	{
		int tt = ft_isprint(' ');
		printf("%d", tt);
		return (0);
	}


size_t	ft_strlen(const char *s)
	// calculates the length of a string, not including '\0'
	{
		size_t	z;

		z = 0;
		while (s[z] != '\0')
		{
			z++;
		}
		return (z);
	}

	int main(void)
	{
		size_t tt = ft_strlen("Yana");
		printf("%zu", tt);
		return (0);
	}

void	*ft_memset(void *s, int c, size_t n)
	// fills the first 'n' bytes of memory area pointed to by 's'
	// with the argument constant byte 'c'
	// || fill a block of memory with a particular value
	{
		size_t	z;
		char	*ps;

		z = 0;
		ps = (char *)s;
		while (n != z)
		{
			ps[z] = c;
			z++;
		}
		return (s);
	}

	#include <stdio.h>
	int main(void)
	{
		char str[] = "Yana";
		ft_memset(str, 's', 4);
		printf("%s", str);
		return (0);
	}

void	ft_bzero(void *s, size_t n)
	// erases the data in the n bytes of the memory
	// starting at the location pointed to by s, by writing zeros 
	// (bytes containing '\0') to that area
	{
		size_t	z;
		char	*ps;

		z = 0;
		ps = (char *)s;
		while (n != 0)
		{
			ps[z] = 0;
			z++;
			n--;
		}
	}

	#include <stdio.h>
	#include <string.h>
	int main(void)
	{
		char str[] = "Yana";
		int len = strlen(str);
		ft_bzero(str, len);
		for (int i = 0; i < len; i++) 
		{
			printf("%d ", (int)str[i]);
		}
		return 0;
	}

void	*ft_memcpy(void *dest, const void *src, size_t n)
	// copies n bytes from memory area src to memory area dest
	{
		size_t		z;
		char		*pdest;
		const char	*psrc;

		z = 0;
		pdest = (char *)dest;
		psrc = (const char *)src;
		while (n > z)
		{
			pdest[z] = psrc[z];
			z++;
		}
		return (dest);
	}

	#include <stdio.h>
	int main(void)
	{
		char source[] = "YanaDemi";
		int n = 4;
		char destination[n + 1];
		ft_memcpy(destination, source, n);
		destination[n] = '\0';
		printf("%s\n", source);
		printf("%s", destination);
		return (0);
	}

void	*ft_memmove(void *dest, const void *src, size_t n)
	// copies n bytes from memory area src to memory area dest
	// using a temporary array. The memory areas may overlap
	{
		int			z;
		char		*pdest;
		const char	*psrc;

		pdest = (char *)dest;
		psrc = (const char *)src;
		z = 0;
		if (pdest < psrc)
		{
			while (z < n)
			{
				pdest[z] = psrc[z];
				z++;
			}
		}
		z = n;
		if (pdest > psrc)
		{
			while (z > 0)
			{
				pdest[z - 1] = psrc[z - 1];
				z--;
			}
		}
		return (dest);
	}

	#include <stdio.h>
	int main(void)
	{
		char source[] = "LaLaLand";
		int n = 4;
		char destination[n + 1];
		ft_memmove(destination, source, n);
		destination[n] = '\0';
		printf("%s\n", source);
		printf("%s", destination);
		return (0);
	}

c size_t	ft_strlcpy(char *dst, const char *restrict src, size_t size)
	// used to copy a string and returns its length. It takes the destination 
	// string, the source string, and the size of the destination string
	{
		size_t	z;
		size_t	y;

		z = 0;
		y = 0;
		while (z < (size) && src[z] != '\0')
		{
			dst[z] = src[z];
			z++;
		}
		dst[z] = '\0';
		while (src[y] != '\0')
		{
			y++;
		}
		return (y);
	}

	#include <stdio.h>
	int main(void)
	{
		char dst[] = "Meow";
		size_t tt = ft_strlcpy(dst, "HelloLo", 5);
		printf("%zu", tt);
		printf("%s", dst);
		return (0);
	}

c size_t	ft_strlcat(char *dst, const char *restrict src, size_t size)
	// used to copy a str to dst and returns their (both) length. 
	// It takes the destination string, the source string, and the size 
	// of the destination string
	{
		size_t	z;
		size_t	i;
		size_t	l;

		z = 0;
		i = 0;
		l = 0;
		while (src[i] != '\0')
		{
			i++;
		}
		while (dst[l] != '\0')
		{
			l++;
		}
		while (z < (size - 1) && src[z] != '\0' && size > (l + 1))
		{
			dst[l + z] = src[z];
			z++;
		}
		dst[l + z] = '\0';
		return (i + l);
	}

	#include <stdio.h>
	int main(void)
	{
		char dst[] = "HelloLo";
		size_t tt = ft_strlcat(dst, "Meow", 10);
		printf("%zu", tt);
		printf("%s", dst);
		return (0);
	}

int	ft_toupper(int c)
	// convert lowercase letters to uppercase
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

	#include <stdio.h>
	int main(void)
	{
		int tt = 'f';
		tt = ft_toupper(tt);
		printf("%c", tt);
		return (0);
	}

int	ft_tolower(int c)
	// convert uppercase letters to lowercase
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

	#include <stdio.h>
	int main(void)
	{
		int tt = 'L';
		tt = ft_tolower(tt);
		printf("%c", tt);
		return (0);
	}

c char	*ft_strchr(const char *s, int c)
	// string scanning operation || locate the first occurrence of c
	// (converted to a char) in the string pointed to by s.  The
	// terminating NUL character is considered to be part of the string.
	{
		int	z;

		z = 0;
		while (s[z] != '\0')
		{
			if (s[z] == c)
			{
				return ((char *)&s[z]);
			}
			z++;
		}
		return (NULL);
	}

	#include <stdio.h>
	int main(void)
	{
		char *tt = ft_strchr("BooB", 'B');
		printf("%p", tt);
		printf("%c", *tt);
		return (0);
	}

c char	*ft_strrchr(const char *s, int c)
	// string scanning operation || locate the LAST occurrence of c
	// (converted to a char) in the string pointed to by s.  The
	// terminating NUL character is considered to be part of the string.
	{
		int	i;
		
		i = 0;
		while (s[i] != '\0')
		{
			i++;
		}
		if (c == '\0')
		{
			return ((char *)&s[i]);
		}
		while (i != 0)
		{
			if (s[i - 1] == c)
			{
				return ((char *)&s[i - 1]);
			}
			i--;
		}
		return (NULL);
	}

	int main(void)
	{
		char *tt = ft_strrchr("BooB", 'B');
		printf("%p", tt);
		printf("%c", *tt);
		return (0);
	}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
	// compares  only  the  first (at most) n bytes of s1 and s2
	// 0, if the s1 = s2
	// negative value if s1 is less than s2
	// positive value if s1 is greater than s2
	{
		int	z;

		z = 0;
		while (n != z)
		{
			if (s1[z] == '\0' || s2[z] == '\0')
			{
				return (s1[z] - s2[z]);
			}
			else if (s1[z] != s2[z])
			{
				return (s1[z] - s2[z]);
			}
			z++;
		}
		return (0);
	}

	#include <stdio.h>
	int main(void)
	{
		int tt = ft_strncmp("ABC", "ABC", 3);
		printf("%d", tt);
		return (0);
	}

void	*ft_memchr(const void *s, int c, size_t n)
	// scan the first n bytes of the memory area pointed to by the void 
	// pointer for the first occurrence of the character c. It returns a 
	// pointer to the matching byte or NULL if character does not occur
	{
		int			z;
		const char	*ps;

		z = 0;
		ps = (const char *)s;
		while (z < n)
		{
			if (ps[z] == c)
			{
				return ((void *)&ps[z]);
			}
			z++;
		}
		return (NULL);
	}

	int main(void)
	{
		char *tt = ft_memchr("Dead mthfkr", 'm', 10);
		printf("%p", tt);
		// NOT FOR NULL
		// printf("%c", *tt);
		return (0);
	}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
	// compares the first n bytes (each interpreted as unsigned char) 
	// > 0, < 0 if s1/s2 is found
	// 0 if n = 0
	{
		int			z;
		const char	*ps1;
		const char	*ps2;

		ps1 = (const char *)s1;
		ps2 = (const char *)s2;
		z = 0;
		while (n != z)
		{
			if (ps1[z] > ps2[z])
			{
				return (1);
			}
			else if (ps1[z] < ps2[z])
			{
				return (-1);
			}
			z++;
		}
		return (0);
	}

	#include <stdio.h>
	int main(void)
	{
		int tt = ft_memcmp("ABC", "ABC", 0);
		printf("%d", tt);
		return (0);
	}
