/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaraujo- <jaraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 01:42:31 by jaraujo-          #+#    #+#             */
/*   Updated: 2020/12/04 05:28:37 by jaraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int check;

	check = 1;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
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
