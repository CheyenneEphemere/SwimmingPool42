#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstring_reverse(char* c)
{
    int index = 0 ;
    while(*(c+index) != '\n')
    {
        index ++ ;
    }
    index --;
    
    while(index >= 0) 
    {
        write(1,c + index,1);
        index -- ;
    }
}

void ft_putnbr(int nb)
{
    char number_string[10] ;
    char digit ;
    int index ; 
    
    index = 0 ;
    while(nb > 0)
    {   
        digit = nb % 10 ;
        number_string[index] = digit + '0' ;
        nb = nb / 10 ;
        index ++;
    }
    number_string[index] = '\n' ;
    ft_putstring_reverse(number_string);
        
	//NEW LINE FEED
	ft_putchar('\n');
}

int main()
{
	//DISPLAY NUMBERS
	ft_putnbr(42);
    ft_putnbr(798);
    ft_putnbr(13579);

}
