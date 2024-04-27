/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:04:10 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 16:55:56 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
/*
int main(void)
{
    const char *str = "Hola hola";
    int ch = '\0';
    char *result = ft_strchr(str, ch);
    if (result != NULL)
	{
        printf("El carácter '%c' en la posición %ld\n", ch, result - str);
    }
	else
	{
        printf("El carácter '%c' no se encuentra\n", ch);
    }
    return (0);
}
*/
