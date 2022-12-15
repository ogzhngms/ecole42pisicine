/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:41:09 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/14 23:16:52 by oggumus          ###   ########.fr       */
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

/*int main()
{
	char dest[30]="OguzhanGumus";
	char src[]="Here";

	ft_strncat(dest,src,3);

	printf("%s",dest);
}*/
