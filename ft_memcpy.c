/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:47:03 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/18 15:01:51 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

 void *ft_memcpy(void *dst, const void *src, size_t n)
{
    
	int                 i;
    char unsigned       *dstCpy;
    const unsigned char *srcCpy;

    dstCpy = (unsigned char *)dst;
    srcCpy = (const unsigned char *)src;
    i = 0;
    while ( dstCpy && i != n)
    {
         dstCpy[i] = srcCpy[i];
         i++;
    }
    return (dst);
}
