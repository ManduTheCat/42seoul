/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoukim <myoukim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 13:49:10 by myoukim           #+#    #+#             */
/*   Updated: 2021/03/31 17:05:41 by myoukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(char a)
{
	write(1, &a, 1);
}

void	ft_put_all(char num)
{
	ft_put_char(num / 10 + '0');
	ft_put_char(num % 10 + '0');
}

void	ft_print(int num1, int num2)
{
	ft_put_all(num1);
	write(1, " ", 1);
	ft_put_all(num2);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	arg(char *num1, int *index)
{
	*num1 = 0;
	*index = 0;
}

int		main(void)
{
	char	num1;
	char	num2;
	int		index;
	int		in_index;

	arg(&num1, &index);
	while (index < 99)
	{
		num2 = 1;
		in_index = 0;
		index += 1;
		while (in_index < 99)
		{
			if (num1 >= num2)
				in_index += 1;
			else
			{
				ft_print(num1, num2);
				in_index += 1;
			}
			num2 += 1;
		}
		num1 += 1;
	}
}
