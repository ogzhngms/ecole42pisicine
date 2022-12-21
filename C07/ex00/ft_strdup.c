/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:39:15 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/19 20:45:52 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;
	int		e;

	i = 0;
	e = 0;
	while (src[i] != '\0')
		i++;
	p = (char *) malloc(i);
	while (src[e] != '\0')
	{
		p[e] = src[e];
		e++;
	}
	p[e] = '\0';
	return (p);
}
