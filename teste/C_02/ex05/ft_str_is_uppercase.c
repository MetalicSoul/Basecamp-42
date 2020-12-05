/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaraujo- <jaraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 03:53:39 by jaraujo-          #+#    #+#             */
/*   Updated: 2020/12/04 05:28:29 by jaraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int check;

	check = 1;
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
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
