/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemarti2 <pemarti2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:02:43 by pemarti2          #+#    #+#             */
/*   Updated: 2024/01/19 11:02:46 by pemarti2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countw(char const *s, char c)
{
	const char      *ps;
        size_t          nsubs;

        ps = s;
        nsubs = 1;
        while (*ps)
        {
                if (*ps == c)
                        nsubs++;
                ps++;
        }
	return (nsubs);
}

char **ft_split(char const *s, char c)
{
	const char	*ps;
	char		**ms;
	char		**pms;
	size_t		nsubs;

	ps = s;
	nsubs = ft_countw(s, c) + 1;
	ms = (char **) malloc(sizeof(char *) * nsubs);
	pms = ms;
	while (*s)
	{
		ps = s;
		while (*ps != c)
			ps++;
		nsubs = ps - s;
		*pms = (char *) malloc(sizeof(char) * nsubs);
		if (*pms == NULL)
		{
    		// If malloc return null free all
    			while (pms > ms)
        			free(*--pms);
    			free(ms);
    			return NULL;
		}
		ft_strlcpy(*pms, s, nsubs + 1);
		s += nsubs;
		while (*s == c)
			s++;
		pms++;
	}
	*pms = NULL;
	return (ms);	
}
