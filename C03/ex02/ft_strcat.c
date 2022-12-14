/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: edogrul <enes.dogrul41@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 19:48:52 by edogrul           #+#    #+#             */
/*   Updated: 2021/10/20 19:48:53 by edogrul          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int a;
	a = 0;
	i = 0;

	while(dest[a]!='\0')
		a++;
	while(src[i]!='\0')
	{
		dest[a] = src[i];
		a++;
		i++;
	}
    return (dest);
}

int	main()
{
	char dest[20]="Enes";
	char src[]="Buraya";

	ft_strcat(dest,src);

	printf("%s",dest);
}
