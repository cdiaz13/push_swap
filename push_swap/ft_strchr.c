/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:21:49 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2021/10/25 09:11:17 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"push_swap.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	j = 0;
	while (ptr[j] != '\0')
		j++;
	if (c == '\0')
		return (&ptr[j]);
	while (s[i] != '\0')
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
