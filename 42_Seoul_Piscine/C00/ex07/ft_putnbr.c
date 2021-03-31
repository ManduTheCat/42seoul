/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoukim <myoukim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 21:00:22 by myoukim           #+#    #+#             */
/*   Updated: 2021/04/01 00:22:19 by myoukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		reverse(int nb, int *buff)
{
	int index;

	index = 0;
	if(nb < 0) 
		nb *= -1;
	while (nb != 0)
	{
		buff[index] = nb % 10;
		nb /= 10;
		index += 1;
	}
	return (index);
}

void	print_num(int num, int index, int *buff)
{
	char num_arr[10];
	char print_num;

	num_arr[0] = '0';
	num_arr[1] = '1';
	num_arr[2] = '2';
	num_arr[3] = '3';
	num_arr[4] = '4';
	num_arr[5] = '5';
	num_arr[6] = '6';
	num_arr[7] = '7';
	num_arr[8] = '8';
	num_arr[9] = '9';

	if (num < 0)
		write(1, "-",1);
	while(0 < index)
	{
		print_num  = num_arr[buff[index - 1]];
		index -= 1;
	}
}

int		main (void)
{	
	int index;
	int num_buff[10];
	int nb;
	nb = 5055050;
	index =  reverse(nb, num_buff);
	printf("%d \n", index);	
    for (int i = 0; i < index; i++)       
	{
        printf("%d\n", num_buff[i]);       
   	}
}
