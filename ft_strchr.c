/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:42:11 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/16 14:16:45 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	const char *ps;

	ps = s;
	while (*ps != c  && *ps)
		ps++;
	if (*ps == c)
		return ((char *)ps);
	return NULL;
}
