/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kesuzuki <Kesuzuki@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:45:35 by Kesuzuki          #+#    #+#             */
/*   Updated: 2020/08/26 02:05:57 by Kesuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		sub;

	i = 0;
	while (i < size / 2)
	{
		sub = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = sub;
		i++;
	}
}
