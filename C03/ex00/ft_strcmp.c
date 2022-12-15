/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oggumus <oguzhan.gumus.08@hotmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:41:09 by oggumus           #+#    #+#             */
/*   Updated: 2022/10/14 23:16:48 by oggumus          ###   ########.fr       */
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

/*int main()
{
	char s1[]="Oguzhan1";
	char s2[]="go";

	printf("%d",ft_strcmp(s1,s2));
}*/
