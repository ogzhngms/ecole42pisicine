/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:42:44 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/13 16:52:25 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	b;
	bool	sonuc;

	sonuc = true;
	i = 0;
	while (true)
	{
		b = str[i];
		if (b == '\0')
			break ;
		if (!(b >= 'a' && b <= 'z'))
		{
			sonuc = false;
			break ;
		}
		i++;
	}
	return (sonuc);
}
