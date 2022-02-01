#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_part(char max_second_number)
{
    char first_number, second_number ;
    
	first_number = '0'; 
    second_number = '0' ; 
    while(first_number <= '9') 
    {
        while(second_number <= '9')
        {
            ft_putchar(first_number);
            ft_putchar(second_number);
            
            second_number++;
        }
        first_number++;
    }
}

void ft_print_part1()
{
    char first_number, second_number ;
    
	first_number = '0'; 
    second_number = first_number + 1 ; 
    while(first_number <= '9') 
    {
        while(second_number <= '9')
        {
            ft_putchar(first_number);
            ft_putchar(second_number);
            
            second_number++;
        }
        first_number++;
    }
}


void ft_print_comb2()
{
    char first_number, second_number ;
    
	first_number = '0'; 
    second_number = first_number + 1 ; 
    while(first_number <= '9') 
    {
        
        while(second_number <= '9')
        {
            ft_putchar(first_number);
            ft_putchar(second_number);
            ft_putchar(' ');
            ft_putchar(first_number);                  
            ft_putchar(second_number);         
            if ((first_number != '9') && (second_number != '9'))
            {
                ft_putchar(',');
            }
            
            second_number++;
        }
        first_number++;
    }
}

int main()
{
	//DISPLAY COMBINATION OF 4 DIFFERENT DIGITS
    ft_print_comb2();

}
