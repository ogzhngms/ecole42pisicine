/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:31:15 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/16 14:31:15 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 1)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		else if (i >= 46341)
			return (0);
		i++;
	}
	return (0);
}
