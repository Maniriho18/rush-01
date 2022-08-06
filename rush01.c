/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmanirih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:45:45 by bmanirih          #+#    #+#             */
/*   Updated: 2022/08/06 15:00:17 by bmanirih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ligne1(int a)
{
	int	i;

	i = 2;
	ft_putchar('A');
	while (i < a)
	{
		ft_putchar('B');
		i++;
	}
	if (i == a)
	{
		ft_putchar('A');
	}
}

void	ligne2(int a)
{
	int	j;

	j = 2;
	ft_putchar('B');
	while (j < a)
	{
		ft_putchar(' ');
		j++;
	}
	if (j == a)
	{
		ft_putchar('B');
	}
}

void	ligne3(int a)
{
	int	p;

	p = 2;
	ft_putchar('C');
	while (p < a)
	{
		ft_putchar('B');
		p++;
	}
	if (p == a)
	{
		ft_putchar('C');
	}
}

void	rush(int a, int b)
{
	int	k;

	k = 2;
	if (a && b > 0)
	{
		ligne1(a);
		ft_putchar('\n');
		while (k < b)
		{
			ligne2(a);
			k++;
			ft_putchar('\n');
		}
		if (k == b)
		{
			ligne3(a);
			ft_putchar('\n');
		}
	}
}
