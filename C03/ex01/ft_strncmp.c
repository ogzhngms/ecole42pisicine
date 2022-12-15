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

/*int main()
{
	char s1[]="Oguzhn";
	char s2[]="Oguz";

	printf("%d",ft_strncmp(s1,s2,3));
}*/
