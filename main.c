#include <math.h>
#include <stdio.h>

const float PI = 3.14;

int main()
{
    int variant, token = 1;
    float p, a1, a2, a3, r, s;
    while (token != 0) { // 
        printf("Окружность - введите 1.\nТреугольник - введите 2.\nВаш вариант "
               "ответа: ");
        scanf("%d", &variant);
        if (variant == 1) {
            printf("\nВведите радиус нужной Вам окружности: ");
            scanf("%f", &r);
            s = PI * pow(r, 2);
            p = 2 * PI * r;
            printf("\n Площадь = %f\n Периметр = %f", s, p);
            token = 0;
        }
        if (variant == 2) {
            printf("\nВведите стороны треугольника: ");
            scanf("%f%f%f", &a1, &a2, &a3);
            if ((a1 + a2 > a3) && (a1 + a3 > a2) && (a2 + a3 > a1)) {
                p = a1 + a2 + a3;
                r = p / 2;
                s = sqrt(r * (r - a1) * (r - a2) * (r - a3));
                printf("\nПериметр = %f\nПлощадь = %f", p, s);
                token = 0;
            } else {
                printf("Ошибка! Введите корректные данные!");
            }
        } else {
            printf("Введён неверный номер, повторите попытку снова!");
            token = 1;
        }
    }
}