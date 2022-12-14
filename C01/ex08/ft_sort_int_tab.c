/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:36:43 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/12 22:02:15 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ters(int *tab, int size)
{
	int	swap;
	int	o;
	int	g;

	g = size - 1;
	o = 0;
	while (o < (size / 2))
	{
		swap = tab[o];
		tab[o] = tab[g];
		tab[g] = swap;
		o++;
		g--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	u;
	int	z;
	int	tutan;

	u = 0;
	z = 1;
	while (u <= size)
	{
		while (z < size)
		{
			if (tab[u] > tab[z])
			{
				tutan = tab[u];
				tab[u] = tab[z];
				tab[z] = tutan;
			}
			z++;
		}
		u++;
		z = 0;
	}
	ters(tab, size);
}
#include<stdio.h>

int main()
{
    int z[]={1,2,3,8,6,0};
    ft_sort_int_tab(z,6);
    int u=0;
    while (u<6)
    {
        printf("%d",z[u]);
        u++;
    }
}
