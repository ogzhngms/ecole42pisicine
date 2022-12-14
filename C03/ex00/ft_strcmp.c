/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:48:52 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/20 19:48:53 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int b;

	i = 0;
	while(s1[i]==s2[i] && s1[i] != 0)
	{
		i++;
	}
	return (s1[i]-s2[i]);
}

int main()
{
	char s1[]="Enes1";
	char s2[]="ne";

	printf("%d",ft_strcmp(s1,s2));
}
