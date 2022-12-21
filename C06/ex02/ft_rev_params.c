/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:31:15 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/18 16:47:25 by oggumus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = argc - 1;
	b = 0;
	if (argc > 1)
	{
		while (a > 0)
		{
			b = 0;
			while (argv[a][b] != '\0')
			{
				write(1, &argv[a][b], 1);
				b++;
			}
			a--;
			write(1, "\n", 1);
		}
	}
}
