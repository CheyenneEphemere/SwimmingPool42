#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_alphabet()
{
	//DISPLAY ALPHABET ASCENDING ORDER
	for(char c='a';c<='z';c++)
	{
		ft_putchar(c);
	}
    
	//NEW LINE FEED
	ft_putchar('\n');
}

void ft_print_reverse_alphabet()
{
	//DISPLAY ALPHABET DESCENDING ORDER
	for(char c='z';c>='a';c--)
	{
		ft_putchar(c);
	}
    
	//NEW LINE FEED
	ft_putchar('\n');
}

void ft_print_numbers()
{
	//DISPLAY NUMERIC ASCENDING ORDER
	for(char c='0';c>='9';c++)
	{
		ft_putchar(c);
	}
    
	//NEW LINE FEED
	ft_putchar('\n');
}

void ft_is_negative(int i)
{
	//TEST IF GREATER THAN ZERO (ZERO IS BOTH POSITIF AND NEGATIVE : NO MATTER
	if (i>0)
	{
		ft_putchar('P');
	}
	else {
		ft_putchar('N');
	}
    
	//NEW LINE FEED
	ft_putchar('\n');
}

void ft_print_comb()
{
	for(char first_number = '0'; first_number <= '9'; first_number++)
    {
        for(char second_number = first_number + 1 ; second_number <= '9'; second_number++)
        {
            for(char third_number = second_number + 1 ; third_number <= '9'; third_number++)
            {
                ft_putchar(first_number);
                ft_putchar(second_number);
                ft_putchar(third_number);
                ft_putchar(',');
            }
        }
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

	//DISPLAY ALPHABET DESCENDING ORDER
	ft_print_reverse_alphabet();

	//DISPLAY NUMBERS
	ft_print_numbers();

	//DISPLAY IS NEGATIVE
	ft_is_negative(100);
	ft_is_negative(-100);

	//DISPLAY COMBINATION OF THREE DIFFERENT DIGITS
     	ft_print_comb();

}
