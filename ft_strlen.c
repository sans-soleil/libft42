/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 14:49:35 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/03 16:44:54 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return(count);
}
