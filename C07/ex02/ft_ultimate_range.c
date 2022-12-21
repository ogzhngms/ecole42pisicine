/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:39:15 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/19 20:46:32 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*d;
	int	i;
	int	i2;
	int	i1;

	i = 0;
	i2 = min;
	i1 = 0;
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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
