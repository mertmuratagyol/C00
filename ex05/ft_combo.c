// c00 ex05 rakamları birbirinden farklı 3 basamaklı sayılar//

#include <unistd.h>

void    ft_combo(void)
{
    int a; // üç int değeri seçtim//
    int b;
    int c;

    a = '0'; // a 0'dan başlıyor//

    while(a <= '7') // eğer a 7 ASCII değerinden küçük veya ona eşitse döngüye gir//
    {
        b = a + 1; // b a'nın bir fazlası olsun bu rakamların farklı olmasını sağlayacak komut//
        while(b <= '8') // b sekizden küçük veya eşitse bu döngüye gir//
        {
            c = b + 1; // c b'nin bir fazlası olacak//
            {
                while(c <= '9') // c dokuzdan küçük veya eşitse bu döngüye gir//
                {
                    write(1, &a, 1); // a yaz//
                    write(1, &b, 1);
                    write(1, &c, 1);
                        if(a != '7') // eğer a yedi ise//
                        {
                            write(1, &", ", 2); // virgül ve boşluk koy iki karakter olduğundan 2 byte yazdık//
                        }
                    
                }
                c++
            }
           b++
        }
         a++
    }

}