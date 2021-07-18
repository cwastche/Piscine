/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splitlen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:41:22 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/20 13:46:16 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_splitlen(char *str)
{
	int i;
	int j

	i = 0;
    j = 0;
	while (str[i])
	{
		while (str[i] < '0' || str[i] > '9')
			i++;
		j = 0;
		while (str[i] >= '0' && str[i] <= '9')
		{
			i++;
			j++;
		}
		break;
	}
	return (j - 1);
}
