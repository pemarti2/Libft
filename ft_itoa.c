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

int  ft_countd(int n)
{
	int	response;

	response = 0;
	while (n != 0)
	{
		n /= 10;
		response++;
	}
	return (response);
}

char *ft_itoa(int n)
{
	char	*response;
	char	*presponse;
	int	countn;

	countn = ft_countd(n);

	if (countn != 0 && n < 0)
		countn++;
	response = (char *) malloc(sizeof(char *) * (countn + 1));
	if (!response)
		return (NULL);
	if (countn == 0)
	{
		response[0] = '0';
		response[1] = '\0';
	}
	else
	{
		presponse = response;
		if (n < 0)
			*presponse = '-';
		presponse += countn + 1;
		*presponse-- = '\0'; 
		while (presponse > response)
		{
			countn = n % 10;
			n /= 10;
			if (countn < 0)
				countn *= - 1;
			if (*--presponse != '-')
				*presponse = countn + 48;
		}
	}
	return (response);
}
