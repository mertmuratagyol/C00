// c00 ex04 rakamları büyükten küçüğe yazdırır//

#include <unistd.h>

void    ft_count_down(void)
{
    char a;
    a = '9'; // char karakterime 9 ASCII değerini atadım//

    while(a >= '0') // eğer bu char dediğim şey 0 ASCII değerinden büyük veya ona eşitse döngüye gir//
    {
        write(1, &a, 1); // yazdır//
        a--; // bir eksilt//
    }
}
