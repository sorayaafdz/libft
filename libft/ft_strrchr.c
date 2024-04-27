/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:16:25 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/15 16:25:16 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	a;

	a = c;
	i = ft_strlen(str);
	if (a == 0)
		return ((char *) &str[i]);
	while (i >= 0)
	{
		if (str[i] == a)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
/*
int main(void)
{
    const char *str = "hola 42";
    int char_to_find = 'o';
    char *result = ft_strrchr(str, char_to_find);
    if (result != NULL)
	{
		printf("Caracter '%c' en la posición %ld\n", char_to_find, result - str);
    }
	else
	{
        printf("Caracter '%c' no encontrado '%s'\n", char_to_find, str);
    }
    return (0);
}
*/
