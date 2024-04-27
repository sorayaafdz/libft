/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:35:51 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/15 16:25:47 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	l;
	size_t	i;

	if (len == 0 && haystack == 0)
		return (NULL);
	l = 0;
	if (!*needle)
		return ((char *) haystack);
	while (haystack[l] && l < len)
	{
		i = 0;
		while (haystack[l + i] == needle[i] && l + i < len)
		{
			if (!needle[i + 1])
				return ((char *) haystack + l);
			i++;
		}
		l++;
	}
	return (NULL);
}
/*
int main(void)
{
    const char haystack[] = "Hola 42";
    const char needle[] = "42";

    char *result = ft_strnstr(haystack, needle, sizeof(haystack));

    if (result != NULL)
	{
        printf("Subcadena encontrada: %s\n", result);
    }
	else
	{
        printf("Subcadena no encontrada\n");
    }
    return (0);
}
*/
