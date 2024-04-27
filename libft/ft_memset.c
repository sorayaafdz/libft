/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:21:08 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/17 16:59:40 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;

	p = ptr;
	while (num > 0)
	{
		*p = (unsigned char)value;
		p++;
		num--;
	}
	return (ptr);
}
/*
int main()
{
    char str[] = "Hola, 42!";
    printf("String original: %s\n", str);
	ft_memset(str, 'a', 4);
    printf("Después memset: %s\n", str);
    return (0);
}
*/
