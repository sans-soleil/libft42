/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pavidal <pavidal@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 18:07:25 by pavidal       #+#    #+#                 */
/*   Updated: 2025/02/26 18:37:37 by pavidal       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void del(void *content)
// {
// 		free(content);
// }

// void ft_lstclear(t_list **lst, void (*del)(void*))
// {
// 	t_list *tmp;
// 	while((*lst) != NULL)
// 	{	del((*lst)->content);
// 		tmp = ((*lst)->next);
// 		free(*lst);
// 		*lst = tmp;
// 	}
// }

// void f(void *content)
// {
// 	int *ptr = (int *)content;
// 	printf("%d\n", (*ptr)+10);
// }
// int main (void)
// {
// 	t_list *lst = (t_list *)malloc(sizeof(t_list));
// 	int *ptr = (int *)malloc(sizeof(int));
// 	*ptr = 25;
// 	lst->content = ptr;
// 	t_list *next_lst = (t_list *)malloc(sizeof(t_list));
// 	int *ptr2 = (int *)malloc(sizeof(int));
// 	*ptr2 = 42;
// 	next_lst->content=ptr2;
// 	next_lst->next=NULL;
// 	lst->next=next_lst;
// 	ft_lstiter(lst, f);
// 	ft_lstclear(&lst, del);
// 	return(0);
// }
// Iterates the list ’lst’ and applies the function
// ’f’ on the content of each node