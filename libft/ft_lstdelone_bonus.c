/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:44:05 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 12:01:13 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void del(void * content)
{
	int *cont = (int*) content;
	*cont = 0;
}

int main(void)
{
    int num1 = 1;
	int num2 = 2;
	int i = 0;

	t_list* node1 = ft_lstnew(&num1);
	t_list* node2 = ft_lstnew(&num2);
	t_list* head = node1;

	node1->next = node2;
	t_list *tmp = head;

	while(tmp)
	{
		if (i== 1)
			ft_lstdelone(tmp, del);
		else
			printf("%i\n", *(int*)tmp->content);
		tmp = tmp->next;
		i++;
	}
}
*/
