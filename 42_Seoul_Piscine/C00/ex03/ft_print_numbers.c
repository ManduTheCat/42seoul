#include <unistd.h>


void ft_print_numbers(void)
{
	int i = 0;
	char start = 48;
	while(i < 10)
	{
		write(1,&start,1);
		i+=1;
		start+=1;	
	}

};
