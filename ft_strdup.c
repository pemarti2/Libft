/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:08:22 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/17 17:28:43 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	int		size;
	char	*response;

	size = ft_strlen(s1);
	response = (char *) malloc(size);
	ft_strlcpy(response, s1, size);
	return (response);
}
