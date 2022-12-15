/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:31:15 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/16 14:31:15 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power >= 1)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0 && nb == 0)
		return (1);
	else if (power == 0)
		return (1);
	else
		return (0);
}
