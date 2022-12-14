/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:38:33 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/13 16:38:36 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

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
