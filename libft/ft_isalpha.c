/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:38:25 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/15 16:08:53 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main(void)
{
    char test_char = '1';
    if (ft_isalpha(test_char))
	{
        printf("%c es una letra del alfabeto\n", test_char);
    }
	else
	{
        printf("%c no es una letra del alfabeto\n", test_char);
    }
    return (0);
}
*/
