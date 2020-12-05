/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaraujo- <jaraujo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:16:10 by jaraujo-          #+#    #+#             */
/*   Updated: 2020/12/04 01:20:21 by jaraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int check;
	int i;

	check = 1;
	i = 0;
	while (str[i] != '\0' && check == 1)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			check = 1;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			check = 1;
		}
		else
		{
			check = 0;
		}
		i++;
	}
	return (check);
}
