/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/07 18:17:11 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/02 15:01:58 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
