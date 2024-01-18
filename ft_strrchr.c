/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 14:20:00 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/16 15:21:49 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	j;
	int	i;

	j = ft_strlen(s);
	i = j;
	while (s[j] != c && j != 0)
		j--;
	if (s[j] != c)
		return ((char *)&s[i]);
	return ((char *) &s[j]);
}
