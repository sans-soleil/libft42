/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/22 20:34:53 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/02 18:45:56 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// int main (void)
// {
// 	int x = 2;
// 	int y = 4;
// 	int z =16;
// 	int *ptr = &x;
// 	int *ptr2 = &y;
// 	int *ptr3 = &z;
// 	int count;
// 	t_list *head = malloc(sizeof(t_list));
// 	head->content = ptr;
// 	head->next = malloc(sizeof(t_list));
// 	head->next->content = ptr2;
// 	head->next->next=malloc(sizeof(t_list));
// 	head->next->next->content=ptr3;
// 	head->next->next->next=NULL;

// 	count = ft_lstsize(head);
// 	printf("%d\n", count);
// 	return (0);
// }
//while (lst != NULL)
//This loop continues until the pointer lst becomes NULL,
//meaning it will iterate through all the nodes in the linked list,
//including the last one.
//Use case: This is the most common and general way to iterate
//through a linked list if you need to process every node,
// while ((*lst) != NULL) checks if the current node is NULL,
//which doesn't help you traverse the list correctly.
// while ((*lst)->next != NULL) checks if
//the current node's next pointer is NULL,
// which is the correct condition for traversing the list
//until you reach the last node.
// The pointer lst should be updated to
//lst = &(*lst)->next; to move to the next node,
//while ensuring you're checking the next pointer of
//the current node ((*lst)->next) to correctly traverse the list.
// //including the last one.