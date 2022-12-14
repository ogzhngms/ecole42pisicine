/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 14:53:29 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/19 14:53:30 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c;
	int	a;

	a = 1;
	c = 0;
	if (argc > 1)
	{
		while (a < argc)
		{
			c = 0;
			while (argv[a][c] != '\0')
			{
				write(1, &argv[a][c], 1);
				c++;
			}
			a++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
