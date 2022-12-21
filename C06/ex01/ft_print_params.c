/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:31:15 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/18 16:46:12 by oggumus          ###   ########.fr       */
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
