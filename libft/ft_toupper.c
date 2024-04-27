/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:51:57 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/15 16:18:24 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_toupper(int c)
{
	if ((c > 96) && (c < 123))
		c = c - 32;
	return (c);
}
/*
int main(void)
{
    char lowercase = 'a';
    char uppercase = ft_toupper(lowercase);

    printf("Uppercase of %c is: %c\n", lowercase, uppercase);

    return (0);
}
*/
