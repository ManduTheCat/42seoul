/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myoukim <myoukim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 20:40:08 by myoukim           #+#    #+#             */
/*   Updated: 2021/03/30 01:45:25 by myoukim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void);
void	add (int arr);
void	evaluate (int arr);

void	ft_putchar(int arr)
{
	while (arr[0] < 3)
	{
	   	write(1, arr, 1);
	   	arr[0]++;
	}
}
int		main (void)
{
	int		arr[3];
	int		*buff;
	int 	index;

	index = 0;	
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	buff = arr;
	ft_putchar(buff);
	while (arr[0] < 3)
	{
	   	write(1, arr, 1);
	   	arr[0]++;
	}
	
	//evaluate (buff);

	
}

