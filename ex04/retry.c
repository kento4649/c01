/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retry.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kesuzuki <Kesuzuki@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 15:48:23 by Kesuzuki          #+#    #+#             */
/*   Updated: 2020/08/25 16:04:33 by Kesuzuki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		result1;
	int		result2;

	result1 = *a / *b;
	*a = result1;

	result2 = *a % *b;
	*b = result2;	
}

int		main(void)
{
	int		a;
	int		b;

	a = 10;
	b = 20;
	ft_ultimate_div_mod(&a, &b);
}
