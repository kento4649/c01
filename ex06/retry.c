/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kesuzuki <Kesuzuki@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 00:23:53 by Kesuzuki          #+#    #+#             */
/*   Updated: 2020/08/26 00:43:38 by Kesuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	
	/*
	while (*str)
	{
		i++;
		str++;
	}
	*/


	return(i);
}

int		main(void)
{
	int		result;
	char	str[] = "hello";
	result = ft_strlen(str);
	printf("%d", result);
}
