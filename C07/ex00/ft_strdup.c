/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:48:52 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/20 19:48:53 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

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
