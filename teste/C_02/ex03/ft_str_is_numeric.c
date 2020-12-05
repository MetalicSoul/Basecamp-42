/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaraujo- <jaraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 01:17:10 by jaraujo-          #+#    #+#             */
/*   Updated: 2020/12/04 05:28:33 by jaraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int check;

	check = 1;
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
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
