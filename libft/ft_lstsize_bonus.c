/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:14:41 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 12:43:42 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main(void)
{
	t_list nodo1;
	t_list nodo2;
	t_list nodo3;

	nodo1.content = "1";
	nodo1.next = &nodo2;

	nodo2.content = "2";
	nodo2.next = &nodo3;

	nodo3.content = "3";
	nodo3.next = NULL;

	int size = ft_lstsize(&nodo1);

	printf("Tamaño de la lista: %d", size);

	return (0);
}
*/
