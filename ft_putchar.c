#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_alphabet()
{
	//DISPLAY ALPHABET ASCENDING ORDER
	for(int c='a';c<='z';c++)
	{
		ft_putchar(c);
	}
}

void ft_print_reverse_alphabet()
{
	//DISPLAY ALPHABET ASCENDING ORDER
	for(int c='z';c>='a';c--)
	{
		ft_putchar(c);
	}
}

int main()
{
	//DISPALY ONE CHARACTER : a
	ft_putchar('a');

	//NEW LINE FEED
	ft_putchar('\n');

	//DISPLAY ALPHABET ASCENDING ORDER
	ft_print_alphabet();

	//NEW LINE FEED
	ft_putchar('\n');

	//DISPLAY ALPHABET DESCENDING ORDER
	ft_print_reverse_alphabet();

}
