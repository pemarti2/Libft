/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:03:24 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/19 11:03:26 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//A cada carácter de la string ’s’, aplica la función ’f’ dando como parámetros el índice de cada carácter dentro de ’s’ y el propio carácter. Genera una nueva string con el resultado del uso sucesivo de ’f’.
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*response;
	char		*presponse;
	unsigned int	i;

	i = (unsigned int) ft_strlen(s);
	response = (char *) malloc(sizeof(char) * (i + 1));
	if (response != NULL)
	{
		presponse = response;
		i = 0;
		while (*s)
			*presponse++ = f(i++, *s++);
		*presponse = '\0';
	}
	else
	{
		free(response);
		return (NULL);
	}
	return (response);
}
