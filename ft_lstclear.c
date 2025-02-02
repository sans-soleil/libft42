/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 16:48:34 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/02 18:47:51 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while ((*lst) != NULL)
	{
		del ((*lst)->content);
		tmp = ((*lst)->next);
		free(*lst);
		*lst = tmp;
	}
}

// void del(void *content)
// {
// 		free(content);
// }
// int main (void)
// {
// 	t_list *lst = (t_list *)malloc(sizeof(t_list));
// 	int * ptr = (int *)malloc(sizeof(int));
// 	*ptr = 7;
// 	lst->content = ptr;
// 	t_list *next_lst = (t_list *)malloc(sizeof(t_list));
// 	int *ptr2 = (int *)malloc(sizeof(int));
// 	*ptr2 = 7;
// 	next_lst->content = ptr2;
// 	next_lst->next = NULL;
//     lst->next = next_lst;
// 	printf("%d", *(int *)(lst->content));
// 	ft_lstclear(&lst, del);
// }
//Deletes and frees the given node and every
// successor of that node, using the function ’del’
// and free(3).
// Finally, the pointer to the list must be set to
// NULL