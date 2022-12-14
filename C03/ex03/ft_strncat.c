/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:48:52 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/20 19:48:53 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int a;

	i =0;
	a = 0;
	while(dest[i]!='\0')
		i++;
	while(src[a]!='\0' && a<nb)
	{
		dest[i]=src[a];
		a++;
		i++;
	}
	return (dest);
}

int main()
{
	char dest[30]="KemalAhmet";
	char src[]="Buraya";

	ft_strncat(dest,src,3);

	printf("%s",dest);
}
