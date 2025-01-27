/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/24 10:28:40 by pavidal       #+#    #+#                 */
/*   Updated: 2025/01/24 11:36:47 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

////Returns the last node of the list (does NOT add it)
// int main (void)
// {
// 	t_list *first = (t_list *)malloc(sizeof(t_list));
// 	if(first == NULL)
// 		return (-1);
// 	t_list *second = (t_list *)malloc(sizeof(t_list));
// 	if(second == NULL)
// 		return (-1);

// 	int x = 5;
// 	first->content = &x; //Store a pointer to the integer 5 in the content;
// 	first->next=NULL;
// 	int y = 25;
// 	second->content= &y; // Store a pointer to the integer 25 in the content
// 	second->next=NULL;

// 	first->next = second;

// 	t_list *last = ft_lstlast(first);
// 	if(last == NULL)
// 		printf("this is empty");
// 	else
// 		printf("%d", *(int *)(last->content));
// 	free(first);
// 	free(second);
// 	return (0);
// }
//This loop continues until the next pointer of the current node
//becomes NULL,
//meaning it will stop before the last node.
//Use case: This is used if you only want to traverse up
//to the second-to-last node, e.g.,
//when you need to handle the last node differently
//(e.g., appending to the list or finding the second-to-last node).
//If lst is NULL (e.g., an empty list is passed),
//dereferencing lst->next will cause a segmentation fault.
//VERY IMPORTANT
//    The function ft_lstlast returns a pointer to the last node,
//and dereferencing it and assigning it to result is incorrect.
//Fix: Store the result of ft_lstlast in a pointer
//(e.g., t_list *last) rather than dereferencing and overwriting result.
//In the case of an empty list,
//ft_lstlast will return NULL, and accessing last->next will result
//in a segmentation fault bc you are dereferencing a NULL pointer.
//Therefore, you need to check
//if last is NULL before attempting to access last->content.