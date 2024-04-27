/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:53:53 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 11:17:31 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main(void)
{
    char test_char = 'A';

    if (ft_isalnum(test_char))
	{
        printf("%c es alfanumérico\n", test_char);
    }
	else
	{
        printf("%c no es alfanumérico\n", test_char);
    }
    return (0);
}
*/
