/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:03:08 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/19 11:03:11 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countd(int n)
{
	int	response;

	response = 0;
	if (n < 0)
		response++;
	while (n != 0)
	{
		n /= 10;
		response++;
	}
	return (response);
}

int	ft_modulus(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*response;
	char	*presponse;
	int		countn;

	countn = ft_countd(n);
	response = (char *) malloc(sizeof(char) * (countn + 1));
	if (!response)
		return (NULL);
	if (countn == 0)
		return ("0\0");
	presponse = response;
	if (n < 0)
		*presponse = '-';
	presponse += countn + 1;
	*presponse-- = '\0';
	while (presponse > response)
	{
		countn = n % 10;
		n /= 10;
		countn = ft_modulus(countn);
		if (*--presponse != '-')
			*presponse = countn + 48;
	}
	return (response);
}
