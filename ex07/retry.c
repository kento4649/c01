/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kesuzuki <Kesuzuki@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 01:41:16 by Kesuzuki          #+#    #+#             */
/*   Updated: 2020/08/26 01:59:45 by Kesuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#

void	ft_rev_int_tab(int *tab, int size);
{
	int		i;
	int		sub;

	i = 0;
	while (i < size / 2)
	{
		sub = tab[i];
		tab[i] = tab[size - 1 - i];
		i++;
	}
}

int		main(void)
{
	int		array = 12345;
	int		size;
	size = sizeof(array);
	ft_rev_int_tab(array, size);
}
