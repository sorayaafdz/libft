/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:42:05 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/26 16:18:09 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;
	void	*cont;

	new = NULL;
	while (lst)
	{
		cont = f(lst->content);
		first = ft_lstnew(cont);
		if (!first)
		{
			free(cont);
			ft_lstclear(&new, del);
			return (0);
		}
		ft_lstadd_back(&new, first);
		lst = lst->next;
	}
	return (new);
}
/*
void del(void *content)
{
	free(content);
}

void *print_content(void *content)
{
    printf("%s\n", (char *)content);
	return (content);
}

int	main(void)
{
	t_list *node1 = ft_lstnew("Hola");
	t_list *node2 = ft_lstnew("42");
	node1->next = node2;
	t_list *lst = node1;
	
	ft_lstmap(lst, print_content, del);
	return (0);
}
*/
