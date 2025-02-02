/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 18:42:22 by pavidal       #+#    #+#                 */
/*   Updated: 2025/01/27 19:20:28 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	
}

int main (void)
{
	
}

//Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node. Creates a new
// list resulting of the successive applications of
// the function ’f’. The ’del’ function is used to
// delete the content of a node if needed