/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:31:15 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/16 14:31:15 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
