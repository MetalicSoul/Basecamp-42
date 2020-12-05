/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaraujo- <jaraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 05:34:24 by jaraujo-          #+#    #+#             */
/*   Updated: 2020/11/26 04:01:30 by jaraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_write_comb();

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	b = '1';
	c = '2';
	while (a < '8')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				ft_write_comb(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}

void	ft_write_comb(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ",", 1);
	}
}
