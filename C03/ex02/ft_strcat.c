/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:41:09 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/14 23:16:52 by oggumus          ###   ########.fr       */
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

/*int	main()
{
	char dest[20]="Oguzhan";
	char src[]="Hello";

	ft_strcat(dest,src);

	printf("%s",dest);
}*/
