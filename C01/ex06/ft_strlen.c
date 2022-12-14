/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:36:43 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/12 21:56:35 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;	
	}
	return (i);
}

/*int	main(void)
{
	char *str;
	
	str = "buguncokguzelsin";
	printf("%d", ft_strlen(str));
	return (0);
}*/
