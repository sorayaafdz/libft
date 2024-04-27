/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:38:31 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/26 15:16:02 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int main(void)
{
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
	
	node1->content = "Primer nodo";
    node1->next = node2;
	node2->content = "Último nodo";
    node2->next = NULL;

    t_list *last_node = ft_lstlast(node1);

    if (last_node)
        printf("El último nodo contiene: %s\n", (char *)last_node->content);
    return (0);
}
*/
