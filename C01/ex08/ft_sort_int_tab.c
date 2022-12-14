/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 14:47:56 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/12 14:48:54 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ters(int *tab, int size)
{
	int	swap;
	int	i;
	int	j;

	j = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	tutan;

	i = 0;
	a = 1;
	while (i <= size)
	{
		while (a < size)
		{
			if (tab[i] > tab[a])
			{
				tutan = tab[i];
				tab[i] = tab[a];
				tab[a] = tutan;
			}
			a++;
		}
		i++;
		a = 0;
	}
	ters(tab, size);
}
#include<stdio.h>

int main()
{
    int a[]={1,2,3,8,6,0};
    ft_sort_int_tab(a,6);
    int i=0;
    while (i<6)
    {
        printf("%d",a[i]);
        i++;
    }
}
