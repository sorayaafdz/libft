/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:53:40 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/15 16:18:01 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}
/*
int	main(void)
{
    printf("ft_tolower('A') = %c\n", ft_tolower('A'));
	printf("ft_tolower('Z') = %c\n", ft_tolower('Z'));
	printf("ft_tolower('m') = %c\n", ft_tolower('m'));
    printf("ft_tolower('7') = %c\n", ft_tolower('7'));
    return (0);
}
*/
