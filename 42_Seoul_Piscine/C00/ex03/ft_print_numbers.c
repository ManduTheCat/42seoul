/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoukim <myoukim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:42:41 by myoukim           #+#    #+#             */
/*   Updated: 2021/03/29 18:10:02 by myoukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	start;

	i = 0;
	start = 48;
	while (i < 10)
	{
		write(1, &start, 1);
		i += 1;
		start += 1;
	}
}
