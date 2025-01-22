/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavidal <pavidal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 20:34:53 by pavidal           #+#    #+#             */
/*   Updated: 2025/01/22 21:09:12 by pavidal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int count;

	count = 0;
	while(lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return(count);
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