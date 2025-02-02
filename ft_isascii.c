/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 13:42:02 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/02 14:21:21 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}

//isascii checks whether c is a 7-bit unsigned char value that fits
//into the ASCII character set. 2^7 = 128 -> 0 - 127, unsigned: ALL +