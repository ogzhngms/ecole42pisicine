/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:40:09 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/13 11:05:54 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
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
