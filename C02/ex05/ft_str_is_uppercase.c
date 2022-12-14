/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:44:20 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/13 16:44:25 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
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
			break ;
		if (!(b >= 'A' && b <= 'Z'))
		{
			sonuc = false;
			break ;
		}
		i++;
	}
	return (sonuc);
}
