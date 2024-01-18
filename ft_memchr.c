/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:10:22 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/17 14:24:41 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int		i;

	str = (unsigned char *) s;
	i = 0;
	while (i < n - 1 && str[i] && str[i] != c)
		i++;
	if (str[i] != c)
		return ((void *)'\0');
	return ((void *)&s[i]);
}
