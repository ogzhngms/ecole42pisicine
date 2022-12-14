/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:40:03 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/13 11:05:29 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	b;
	bool	sonuc;

	i = 0;
	sonuc = true;
	while (true)
	{
		b = str[i];
		if (b == '\0')
		{
			break ;
		}
		if (!(b >= '0' && b <= '9'))
		{
			sonuc = false;
			break ;
		}
		i++;
	}
	return (sonuc);
}
