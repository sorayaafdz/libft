/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:42:17 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 11:58:08 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*pos;

	if (!lst || !*lst || !*del)
		return ;
	while (*lst && del)
	{
		pos = *lst;
		del(pos->content);
		*lst = (*lst)->next;
		free (pos);
	}
}
/*
int main(void)
{
    t_list *node = ft_lstnew("Hola, 42!");

    ft_lstclear(&node, free);

	return (0);
}
*/
