#include <stdio.h>
/*2026.03.09 Для изучения массивов и адресов памяти в С.
Каждый следующий адрес больше предыдущего на 4 байта (потому что float занимает 4 байта)*/
int main(void)
{
    float dollar_rates[5];
    dollar_rates[0] = 73.5;
    dollar_rates[1] = dollar_rates[0] * 1.01;

    printf("Dolar rater: %p\n", dollar_rates);
    printf("Dolar rater[0]: %p\n", &dollar_rates[0]);
    printf("Dolar rater[1]: %p\n", &dollar_rates[1]);
    printf("Dolar rater[2]: %p\n", &dollar_rates[2]);
    printf("Dolar rater[3]: %p\n", &dollar_rates[3]);
    printf("Dolar rater[4]: %p\n", &dollar_rates[4]);

    return 0;
}