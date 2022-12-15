/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:31:15 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/16 14:31:15 by oggumus          ###   ########.fr       */
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
