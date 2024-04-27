/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:34:36 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/17 17:01:17 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int main(void)
{
    char test_char = 'A';
    
    if (ft_isprint(test_char))
	{
        printf("%c es un carácter imprimible\n", test_char);
    }
	else
	{
        printf("%c no es un carácter imprimible\n", test_char);
    }
    return (0);
}
*/
