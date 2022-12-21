/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:39:15 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/19 20:45:52 by oggumus          ###   ########.fr       */
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
