/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kesuzuki <Kesuzuki@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 08:36:38 by Kesuzuki          #+#    #+#             */
/*   Updated: 2020/08/26 02:32:37 by Kesuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int		tab = 1234;
	int		size = 4;
	
	ft_rev_int_tab(&tab, size);
}
