/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:19:51 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 13:29:42 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*q;
	unsigned char	*p;
	size_t			i;

	q = (unsigned char *)str1;
	p = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (q[i] != p[i])
			return (q[i] - p[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
    char str1[] = "Hola";
    char str2[] = "Holi";
    int result = ft_memcmp(str1, str2, 5);

    if (result == 0)
        printf("Las cadenas son iguales\n");
    else if (result < 0)
        printf("str1 es menor que str2\n");
    else
        printf("str1 es mayor que str2\n");
    return (0);
}
*/
