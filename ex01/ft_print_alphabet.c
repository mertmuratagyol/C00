// c00 ex01 tekrar alfabeyi baştan sona yazdır//

#include <unistd.h>

void    ft_print_alphabet(void) // karaktere herhangi bir atama yapmamışım
{
    char    c; // bi char karakteri belirledim 

    c = 'a'; // '' kullanmamın sebebi a harfinin ASCII değerini istemem

    while(c <= 'z') // eğer bu char değerim z harfinin ASCII değerinden küçükse bu döngüye gir//
    {
        write(1, &c, 1); // yazdır //
        c++; // karakteri bir arttır//
    }

}

// alternatif //

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    b;

    b = 97 //küçük a harfinin ASCII değeri

    while( b <= 122) // 122 küçük z ASCII değeri
    {
        write(1, &b, 1);
        b++;
    }
}
