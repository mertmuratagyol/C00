// c00 ex07

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_put_nbr(int nb)
{
    
        if (nb == -2147483648)
        {
            ft_putchar('-');
            ft_putchar('2'); 
            ft_put_nbr(147483648);
        }
        else if (nb < 0)
        {
            ft_putchar('-');
            ft_put_nbr(-nb);
        }
        else if (nb > 9)
        {
            ft_put_nbr(nb / 10);
            ft_put_nbr(nb % 10);
        }
        else if (nb <= 9)
        {
            ft_putchar(nb + '0');
        }
   
}

int main()


{
    ft_put_nbr(1);
   
    ft_put_nbr(0);
}