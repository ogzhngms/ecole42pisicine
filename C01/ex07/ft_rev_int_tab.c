/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:36:43 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/12 21:59:45 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
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
/*int		main(void)
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	int size = 6;

	ft_rev_int_tab(tab, size);
	return (0);
}*/
