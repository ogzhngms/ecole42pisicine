/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:48:24 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/13 16:48:28 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strupcase(char *str)
{
	char	b;
	int		i;

	i = 0;
	while (true)
	{
		b = str[i];
		if (b == '\0')
			break ;
		if (b >= 'a' && b <= 'z')
		{
			str[i] = b - 32;
		}
		i++;
	}
	return (str);
}
