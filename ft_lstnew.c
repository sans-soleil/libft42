/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/22 18:44:54 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/06 19:52:35 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = (t_list *)malloc(sizeof(t_list));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

int main (void)
{
	int x =15;
	int *content = &x;
	t_list *node = ft_lstnew(content);


	if (node == NULL)
		return (-1);
	printf("%d\n", *(int *)(node->content));
	free(node);
	return (0);
}
// t_list is a data structure that
//represents a node in a linked_list;
//(->) also dereferences the pointer,
//while the (.) gets the struct member which is not a pointer.
