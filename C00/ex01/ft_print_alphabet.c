/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <dogrulenes0@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:31:28 by edogrul           #+#    #+#             */
/*   Updated: 2021/12/26 20:31:28 by edogrul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabets(void)
{
	char	a;
	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
}
