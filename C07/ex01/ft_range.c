/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:49:04 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/20 19:49:54 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int	i;
	int	i1;
	int	i2;

	i = 0;
	i1 = 0;
	i2 = min;
	if (min >= max)
		return (NULL);
	while (i2 < max)
	{
		i1++;
		i2++;
	}
	d = (int *) malloc(sizeof(int) * i1);
	while (min < max)
	{
		d[i] = min;
		min++;
		i++;
	}
	d[i] = '\0';
	return (d);
}
