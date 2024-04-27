/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:50:07 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/24 18:16:36 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && *src)
		{
			*dest = *src;
			i++;
			dest++;
			src++;
		}
		*dest = '\0';
	}
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}
/*
int main(void)
{
    char dest[20];
    const char *src = "Hola, 42";
	size_t len;

    len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Cadena destino después de copiar: %s\n", dest);
    printf("Longitud devuelta por ft_strlcpy: %zu\n", len);
	return (0);
}
*/
