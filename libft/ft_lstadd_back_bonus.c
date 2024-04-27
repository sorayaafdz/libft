/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:51:04 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/26 16:01:40 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int main(void)
{
    t_list *node1 = ft_lstnew("Hola");
    t_list *node2 = ft_lstnew("42");
    t_list *lst = node1;

    ft_lstadd_back(&lst, node2);
	printf("%s", (char *)lst->content);
	lst = lst->next;
	printf("%s", (char *)lst->content);

	return (0);
}
*/
