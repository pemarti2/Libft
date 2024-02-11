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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_cpy;
	const unsigned char	*src_cpy;

	if (!dest)
		return (NULL);
	dest_cpy = (unsigned char *)dest;
	src_cpy = (const unsigned char *)src;
	i = 0;
	while (dest_cpy && i != n)
	{
		dest_cpy[i] = src_cpy[i];
		i++;
	}
	return (dest);
}
