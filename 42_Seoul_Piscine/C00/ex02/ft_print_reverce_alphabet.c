#include<unistd.h>

void ft_print_reverse_alphabet(void)
{
	char start = 122;
	int i = 26;
	
	while(i > 0)
	{
		write(1,&start,1);
		i -= 1;
		start -= 1;	
	}

};
