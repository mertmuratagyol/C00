//c00 ex03 rakamları sıralı yazdırır//

#include <unistd.h>

void    ft_print_numbers(void)
{
    char a; 

    a = '0'; // bi char karakteri belirledim en küçük rakam olan 0 ASCII değerini atadım//
    while(a <= '9') // eğer bu char karakterim 9 ASCII değerinden küçük veya ona eşitse döngüye gir//
    {
        write(1, &a, 1); // yazdır//
        a++; // değeri bir arttır//
    }
}

// alternatif 1//

#include <unistd.h>

void    ft_print_numbers(void)
{
    char b;

    b = 48; // üsttekinden tek farkı ASCII değerini sayı olarak yazmam //

    while(b <= 57) // z ASCII değeri//
    {
        write(1, &b, 1);
        b++;
    }
}

