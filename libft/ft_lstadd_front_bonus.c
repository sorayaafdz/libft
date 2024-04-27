/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:26:28 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/26 15:41:59 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *list = node1;

    ft_lstadd_front(&list, node2);

    t_list *current = list;
    while (current)
	{
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
    return (0);
}
*/
