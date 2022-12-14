/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:15:10 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/13 17:31:36 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	b;

	i = 0;
	while (true)
	{	
		b = str[i];
		if (b == '\0')
		{
			return (1);
		}
		if (!((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
