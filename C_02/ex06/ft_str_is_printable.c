/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaraujo- <jaraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 03:57:16 by jaraujo-          #+#    #+#             */
/*   Updated: 2020/12/04 05:28:20 by jaraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int check;

	check = 1;
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			str++;
		}
		else
		{
			check = 0;
			return (check);
		}
	}
	return (check);
}
