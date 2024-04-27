/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:34:22 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/24 18:13:10 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main(void)
{
    char buffer[20] = "Hola, 42";

    printf("Antes de ft_bzero: %s\n", buffer);
    ft_bzero(buffer, sizeof(buffer));
    printf("Después de ft_bzero: %s\n", buffer);
    return (0);
}
*/
