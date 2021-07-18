/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwastche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 08:32:44 by cwastche          #+#    #+#             */
/*   Updated: 2021/03/07 10:29:52 by cwastche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (str[y] != '\0')
	{
		if (str[y] >= 'a' && str[y] <= 'z')
			x++;
		if (str[y] >= 'A' && str[y] <= 'Z')
			x++;
		y++;
	}
	if (x == y)
		return (1);
	else
		return (0);
}