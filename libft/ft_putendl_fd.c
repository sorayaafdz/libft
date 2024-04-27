/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:11:59 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/15 16:16:11 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_putendl_fd(char *c, int fd)
{
	ft_putstr_fd(c, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main(void)
{
    char *str = "Hola 42";
    int fd = 1;
    ft_putendl_fd(str, fd);
    return (0);
}
*/
