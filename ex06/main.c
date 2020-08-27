/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kesuzuki <Kesuzuki@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 08:23:58 by Kesuzuki          #+#    #+#             */
/*   Updated: 2020/08/21 08:31:12 by Kesuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char	str[] = "hello";
	int		result;

	result = ft_strlen(str);
	printf("%d", result);
}
