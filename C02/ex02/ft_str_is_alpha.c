/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:39:23 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/13 11:05:19 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>
//#include <stdio.h>//

int	ft_str_is_alpha(char *str)
{
	int i;
	char b;

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

/*int main()
{
    int result;

    result = ft_str_is_alpha("oguzhan");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("ÇOK");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("TADLI010102");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("999");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("");
    printf("Result: %d\n", result);
    
    return 0;
}*/
