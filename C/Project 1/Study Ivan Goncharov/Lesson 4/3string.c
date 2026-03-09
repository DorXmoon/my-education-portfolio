#include <stdio.h>
/*2026.03.09 Массивы строки, ОБЯЗАТЕЛЬНО, послетний байт кончается нулями 0!*/
int main(void)
{
//    char greeting[] = "hello";
    char greeting[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n\r", greeting);
    
    return 0;
}