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
	const char	*ps;
	size_t		nsubs;

	ps = s;
	nsubs = 1;
	while (*ps)
	{
		if (*ps++ == c)
			nsubs++;
	}
	return (nsubs);
}

int	ft_free_null(char **pms, char **ms)
{
	if (*pms == NULL)
	{
		while (pms > ms)
			free (*--pms);
		free (ms);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	const char	*ps;
	char		**ms;
	char		**pms;

	ps = s;
	ms = (char **) malloc(sizeof(char *) * (ft_countw(s, c) + 1));
	pms = ms;
	while (*s)
	{
		ps = s;
		while (*ps != c)
			ps++;
		*pms = (char *) malloc(sizeof(char) * (ps - s));
		if (ft_free_null(pms, ms) == 0)
			return (NULL);
		ft_strlcpy(*pms, s, (ps - s) + 1);
		s += (ps - s) + 1;
		pms++;
	}
	*pms = NULL;
	return (ms);
}
