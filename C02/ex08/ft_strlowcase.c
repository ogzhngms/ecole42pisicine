/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:40:09 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/13 11:06:36 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (true)
	{
		if (str[i] == '\0')
			break ;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*#include<stdio.h>
int main()
{
    char a[] = "PASQUALE SAYS HI";
    printf("%s\n", ft_strlowcase(a));
    return (0);
}
*/
