/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/08 14:36:17 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/02 15:02:30 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (16384);
	return (0);
}
// checks for any printable character including space: 32 to 126 decim