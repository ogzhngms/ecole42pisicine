/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:40:09 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/13 11:06:10 by oggumus          ###   ########.fr       */
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
/*int main()
{
    char str[] = "asdZXC 932";
    ft_strupcase(str);
    
    printf(str);
}*/
