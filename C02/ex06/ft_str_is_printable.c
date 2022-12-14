/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:40:09 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/13 11:06:10 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_printable(char *str)
{
	int	i;
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
