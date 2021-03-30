/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoukim <myoukim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 23:27:50 by myoukim           #+#    #+#             */
/*   Updated: 2021/03/31 02:30:28 by myoukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_rl(char l_0, char l_1, char r_0, char r_1, char space);

int		main(void)
{
	char	l_0;
	char	l_1;
	char	r_1;
	char	r_0;
	char 	space;

	l_0 = '0';
	l_1 = '0';
	r_0 = '0';
	r_1 = '1';
	space = ' ';
	while(l_0 <= '9') //종료 조건 넣고  함수화 필요
	{
		if (l_1 + l_0 < r_1 + r_0)
		{
			print_rl(l_0, l_1, r_0, r_1, space);
		}
		else
		{
			l_0 += 1;
		}
		while(l_1 <= '9')
		{
			if (l_1 + l_0 < r_1 + r_0)
			{
				print_rl(l_0, l_1, r_0, r_1, space);
			}
			else
			{
				l_1 += 1;
			}

			while (r_0 <= '9')
			{
				print_rl(l_0, l_1, r_0, r_1, space);
				while (r_1 < '9')
				{
					r_1+= 1;
					print_rl(l_0, l_1, r_0, r_1, space);
				}
				r_1 = '0';
				r_0 += 1;
			}
			r_0 = '0';
			l_1 += 1;
		}
		l_1 = '0';
		l_0 += 1;
	}

}

void	print_rl(char l_0, char l_1, char r_0, char r_1, char space)
{
	write(1, &l_0, 1);
	write(1, &l_1, 1);
	write(1, &space, 1);
	write(1, &r_0, 1);
	write(1, &r_1, 1);
	write(1, ",", 1);
	write(1, &space, 1);
}
