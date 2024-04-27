/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 16:33:32 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/15 16:31:19 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	len = 0;
	while (dst[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && len + 1 < size)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < size)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
/*
int main(void)
{
    char dest[20] = "Hola, ";
    char src[] = "42";
    size_t size = sizeof(dest);
	size_t result = ft_strlcat(dest, src, size);

	printf("Resultado concatenación: %s\n", dest);
	printf("Longitud total de la concatenación: %zu\n", result);
    return (0);
}
*/
