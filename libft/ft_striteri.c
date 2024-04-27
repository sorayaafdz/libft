/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:39:12 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 17:13:52 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void print_index_and_char(unsigned int index, char *c)
{
    printf("Indice: %u, Char: %c\n", index, *c);
}

int main(void)
{
    char str[] = "Hola";
    ft_striteri(str, &print_index_and_char);
    return (0);
}
*/
