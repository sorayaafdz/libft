/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 15:17:17 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/25 17:06:24 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == NULL)
		return (NULL);
	while (i > 0)
	{
		dest[j] = s1[j];
		i--;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int main(void)
{
	const char	*original = "Hola 42";
	char		*duplicated = ft_strdup(original);

    printf("Cadena original: %s\n", original);
    printf("Cadena duplicada: %s\n", duplicated);
    return (0);
}
*/
