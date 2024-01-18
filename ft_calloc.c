/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:45:53 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/17 17:07:32 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t count, size_t size)
{
	void	*response;
	
	response = malloc(count * size);
	ft_memset(response, 0, count * size);
	return (response);
}
