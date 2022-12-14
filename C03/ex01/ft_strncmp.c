/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:48:52 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/20 19:48:53 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i=0;

	while(s1[i]==s2[i] && i<n && s1[i] !=0)
	{
		i++;
	}
	return (s1[i]-s2[i]);
}

int main()
{
	char s1[]="Enes";
	char s2[]="Ened";

	printf("%d",ft_strncmp(s1,s2,3));
}
