/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: machanse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 12:12:47 by machanse          #+#    #+#             */
/*   Updated: 2021/01/23 12:39:44 by machanse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'a' && *(str + i) <= 'z'))
		{
			i += 1;
			continue;
		}
		else if ((*(str + i) >= 'A' && *(str + i) <= 'Z'))
		{
			i += 1;
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
