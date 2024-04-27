/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:43:39 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 11:26:52 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int main(void)
{
    char ch = '1';    
    if (ft_isascii(ch))
        printf("Es un caracter ASCII válido\n");
    else
        printf("No es un caracter ASCII válido\n"); 
    return (0);
}
*/
