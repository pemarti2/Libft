/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 17:03:51 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/14 18:42:48 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char unsigned		*dstCpy;
	const unsigned char	*srcCpy;

	dstCpy = (unsigned char *)dst;
	srcCpy = (const unsigned char *)src;
	i = 0;
	while ( dstCpy && len != i)
	{
		dstCpy[i] = srcCpy[i];
		i++;
	}
	return (dst);
}
