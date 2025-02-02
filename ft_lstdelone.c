/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 14:37:31 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/02 18:48:27 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del || !lst)
		return ;
	del(lst->content);
	free(lst);
}

// void del (void *content)
// {
// 	if(content != NULL)
// 	{
// 		free(content);
// 		content = NULL;
// 	}
// }
// int main (void)
// {
// 	t_list *lst = (t_list *)malloc(sizeof(t_list));
// 	if(lst == NULL)
// 		return (1);
// 	int *y = malloc(sizeof(int));
// 	*y = 7;
// 	lst->content = y;
// 	lst->next = NULL;
// 	printf("%d\n", *(int *)(lst->content));
// 	ft_lstdelone(lst, del);
// 	return(0);
// }
// st: The node to free.
// del: The address of the function used to delete
// the content.
// Takes as a parameter a node and frees the memory of
// the node’s content using the function ’del’ given
// as a parameter and free the node. The memory of
// ’next’ must not be freed.
// void (*del)(void *): This is a pointer to a function
//that takes a void * as a parameter and performs
//the actual deletion of the node's content
//(e.g., freeing memory or performing cleanup)
//Do not free the next pointer of the node,
//so the rest of the linked list remains intact.
//why we are using a pointer to a function?
//The linked list node's content is defined as a void *,
//which means it can point to any type of data
//(e.g., a string, integer, struct, etc.).
//Since the function doesn’t know the exact type of content
//or how it should be freed,
//we provide a custom function (del) to handle this.