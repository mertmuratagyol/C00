// bu kod iki basamaklı sayıların kombinasyonlarını yazacak c00da ex06//

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    a;
char    b;

a = 0;
b = 0;

while(a <= 99)
{
    b = a + 1;
    while(b <= 99)
    {
        ft_putchar(a / 10 + '0');
        ft_putchar(a % 10 + '0');
        ft_putchar(' ');
        ft_putchar(b / 10 + '0');
        ft_putchar(b % 10 + '0');

        if(a != 98 || b != 99)
        {
            write(1, ", ", 2);
        }
        b++
    }
    a++
}