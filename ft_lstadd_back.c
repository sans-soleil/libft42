/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/24 11:39:06 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/06 20:06:14 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next != NULL)
		lst = &(*lst)->next;
	(*lst)->next = new;
}

// int main (void)
// {
// 	t_list *lst = (t_list *)malloc(sizeof(t_list));
// 	if (lst == NULL)
// 		return (-1);
// 	int x = 1;
// 	lst->content=&x;
// 	lst->next=NULL;

// 	t_list *new = (t_list *)malloc(sizeof(t_list));
// 	if (new == NULL)
// 		return(-1);

// 	int y = 2;
// 	new->content=&y;
// 	new->next =NULL;                                                                                                                                                                      

// 	ft_lstadd_back(&lst, new);
// 	printf("%d", *(int *)lst->next->content);
// 	free(lst);
// 	free(new);
// 	return(0);
// }
//Adds the node ’new’ at the end of the list.
//be careful: lst->next is a pointer to the new node,
//not an integer. for accesing that you need
//the extra ->content
