/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:13 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/15 17:59:46 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcat(char *dst, char *src, size_t dstsize)
{
	size_t response;
	size_t dst_len;
	
	dst_len = ft_strlen(dst);
	response = dst_len + ft_strlen(src);
	if 
	while (dst_len - 1 != dstsize && *src)
		dst[dst_len++] = *src++;
	dst[++dst_len] = '\0';
	return (response);
}
