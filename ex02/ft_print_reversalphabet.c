//c00 ex02 alfabeyi tersten yazdırır//

#include <unistd.h> //kütüphane ekledim//

 void   ft_print_reversalphabet(void) // fonksiyon yazıyorum//

 {
    char    z; // char karakteri belirle//

    z = 'z'; // o karaktere ASCII z değeri atadım

    while(z >= 'a') // eğer bu char değerim a'nın ASCII değerinden büyükse veya eşitse döngüye gir//
    {
        write(1, &z, 1); // olduğun harfi yaz//
        z--; // bir eksilt//
    }

    
}

//alternatif 1//

#include <unistd.h>

void    ft_print_reversalphabet(void)
{
    char    y;

    y = 122; // chara direkt z harfinin ASCII değerini atadım//

    while(y >= 97) // bu char a'nın ASCII değerinden büyükse veya eşitse döngüye gir//
    {
        write(1, &y,1);
        y--;
    }


}
