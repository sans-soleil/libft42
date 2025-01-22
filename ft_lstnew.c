/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavidal <pavidal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:44:54 by pavidal           #+#    #+#             */
/*   Updated: 2025/01/22 20:43:19 by pavidal          ###   ########.fr       */
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

// int main (void)
// {
// 	int x =15;
// 	int *content = &x;
// 	t_list *node = ft_lstnew(content);
// 	if (node == NULL)
// 		return (-1);
// 	printf("%d\n", *(int *)(node->content));
// 	free(node);
// 	return (0);
// }
//arrow also dereferences the pointer,
//while the dot gets the struct member which is not a pointer.
// s_list is a data structure that
//represents a node in a linked_list;
