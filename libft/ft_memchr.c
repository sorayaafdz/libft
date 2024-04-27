/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:32:56 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 13:24:07 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	char	ch;
	size_t	i;

	p = (char *)s;
	ch = c;
	i = 0;
	while (i < n)
	{
		if (p[i] == ch)
			return (p + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
    char *str = "Hola 42!";
    char ch = '4';

    void *result = ft_memchr(str, ch, 6);
    if (result)
	{
        printf("Carácter '%c' en la posición %ld\n", ch, (char*)result - str);
    }
	else
	{
        printf("Carácter '%c' no encontrado\n", ch);
    }
    return (0);
}
*/
