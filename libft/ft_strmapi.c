/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofernan <sofernan@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:28:19 by sofernan          #+#    #+#             */
/*   Updated: 2024/04/26 14:35:17 by sofernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fstr;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	fstr = (char *)malloc(ft_strlen(s) + 1);
	if (!fstr)
		return (NULL);
	while (s[i])
	{
		fstr[i] = f(i, s[i]);
		i++;
	}
	fstr[i] = '\0';
	return (fstr);
}
/*
char	uppercase(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	char s[] = "hola";
    char *result = ft_strmapi(s, &uppercase);

    printf("Resultado: %s\n", result);
    return (0);
}
*/
