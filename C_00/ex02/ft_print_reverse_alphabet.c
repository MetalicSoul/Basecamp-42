/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaraujo- <jaraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 01:14:09 by jaraujo-          #+#    #+#             */
/*   Updated: 2020/11/24 01:30:05 by jaraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int alpharev;

	alpharev = 122;
	while (alpharev >= 97)
	{
		write(1, &alpharev, 1);
		alpharev--;
	}
}
