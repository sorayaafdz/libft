/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:57:57 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 11:15:40 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}
/*
int main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));
    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	return (0);
}
*/
