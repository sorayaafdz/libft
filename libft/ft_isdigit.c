/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:44:43 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 11:30:13 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int	main(void)
{
    char test_char = '1';
	if (ft_isdigit(test_char))
	{
        printf("Es un dígito\n");
    }
	else
	{
        printf("No es un dígito\n");
	}
    return (0);
}
*/
