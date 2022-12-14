/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:11:34 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/18 19:11:38 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	t;

	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
		return (0);
	a = 1;
	t = 1;
	while (a <= nb)
	{
		t = t * a;
		a++;
	}
	return (t);
}
