/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:23:58 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 13:44:14 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	char		*end;
	const char	*src_end;

	d = dest;
	s = src;
	end = d + n;
	src_end = s + n;
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		while (n--)
			*(--end) = *(--src_end);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
/*
int main()
{
    char str[] = "abcdefgh";
    printf("Original: %s\n", str);
    ft_memmove(str + 3, str, 5);
    printf("Modificado: %s\n", str);
    return (0);
}
*/
