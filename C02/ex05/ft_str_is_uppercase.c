/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:40:09 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/13 11:06:02 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_uppercase(char *str)
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
		if (!(b >= 'A' && b <= 'Z'))
		{
			sonuc = false;
			break ;
		}
		i++;
	}
	return (sonuc);
}
