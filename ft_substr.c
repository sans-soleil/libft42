/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 22:37:50 by pavidal       #+#    #+#                 */
/*   Updated: 2024/10/25 13:43:16 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_malloc_empty(void)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * 1);
	if (dest != NULL)
		dest[0] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	slen;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_malloc_empty());
	if (len >= slen - start)
		len = slen - start;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test1[17] = "Testing1234567890";
// 	char *test_result;
// 	test_result = ft_substr(test1, 5, 5);
// 	printf("%s", test_result);  //ng123
// 	return (0);
// }
