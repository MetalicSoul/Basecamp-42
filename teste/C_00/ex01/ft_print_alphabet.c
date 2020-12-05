/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaraujo- <jaraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 00:41:22 by jaraujo-          #+#    #+#             */
/*   Updated: 2020/11/24 01:00:15 by jaraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int alpha;

	alpha = 97;
	while (alpha <= 122)
	{
		write(1, &alpha, 1);
		alpha++;
	}
}
