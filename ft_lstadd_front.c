/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavidal <pavidal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:53:44 by pavidal           #+#    #+#             */
/*   Updated: 2025/01/22 20:32:57 by pavidal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main (void)
// {
// 	int x = 2;
// 	int *content = &x;
// 	t_list	*lst = NULL;

// 	t_list	*new = (t_list *)malloc(sizeof(t_list));
// 	if (new == NULL)
// 		return(-1);
// 	new->content = content;
// 	new->next = NULL;

// 	ft_lstadd_front(&lst, new);
// 	printf("%d\n", *(int *)(lst->content));
// 	free(new);
// 	return (0);
// }
// st: The address of a pointer to the first link of
// a list AKA HEAD.
//WHY IS A A DOUBLE POINTER?
//so the function can directly modify the caller's head pointer.
// new: The address of a pointer to the node to be
// added to the list
// *lst, have to dereference one to access
//to the structure bc it is a double pointer
// If a single pointer (t_list *lst) was used,
//the function would only modify a local copy of the pointer,
//and the changes wouldn't reflect in the caller's scope.
// *lst -= new??? whyyyyy . So after this:
// The new toy becomes the start of the chain.
// The rest of the chain remains connected because
//the new toy’s string points to the old head.
// Why is this important?
// no one would know the new toy is now the start of the chain!
//It would be lost and not part of the list.