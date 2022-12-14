/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:46:01 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/13 16:46:03 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_printable(char *str)
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
		if (!(b >= ' ' && b <= 127))
		{
			sonuc = false;
			break ;
		}
		i++;
	}
	return (sonuc);
}
