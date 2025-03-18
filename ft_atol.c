/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atol.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/09 18:59:04 by pavidal       #+#    #+#                 */
/*   Updated: 2025/03/09 21:27:40 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

long	ft_atol(const char *str)
{
	int sign;
	long result;
	int i;

	sign = 1;
	result = 0;
	i = 0;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(ft_isdigit(str[i]) != 0)
	{
		 if (result > (LONG_MAX - (str[i] - '0')) / 10)
		{
			if(sign == 1)
				return(LONG_MAX);
			if(sign == -1)
				return(LONG_MIN);
		}
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result * sign);
}

// int main (void)
// {
//  	const char s1[] = "214748364856";
//  	const char s2[] = "214748364856";
//  	printf("%ld\n", ft_atol(s1));
//  	printf("%ld\n", atol(s1));
//  	printf("%ld\n", ft_atol("-2147483648"));
// 		printf("%ld\n", ft_atol("-2147483648"));
//      printf("%ld\n", ft_atol("42"));
//      printf("%ld\n", ft_atol("   +789abc"));
//      printf("%ld\n", ft_atol("999999999999"));
//      printf("%ld\n", ft_atol("214748364856"));
//      printf("Real deal: %ld\n", atol("214748364856"));
//      printf("%ld\n", ft_atol("--21474836488675760237423823747"));
//      printf("Real deal: %ld\n", atol("-21474836488675760237423823747"));
//      return 0;
// }
//Return type: a 64-bit signed long integer
//Check + and -. if negative use the sign flag
//enter the loop and check if the ascii is a digit,
//check the overflow and underflow ->
//Imagine you have a big jar (this is the result) where
//you’re putting marbles
//(the digits of the number you’re converting).
//Each time you add a new marble,
//you’re multiplying the number by 10 and adding the new marble.
//if so proceed to convert by muoltipying by 10 and adding the digit
//check <limits.h>