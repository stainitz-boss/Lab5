# Домашнее задание к работе 5: Вычисление по формуле

## Условие задачи
Вычислить значение β по формуле:

$$\beta = \sqrt{10 \cdot \left(\sqrt[3]{x} + x^{y+2}\right)} \cdot \left(\arcsin^2 z - |x - y|\right)$$

**Дано:**
- x = 16.55 * 10^-3
- y = -2.75
- z = 0.15

**Ожидаемый результат:** `40.630694`

## 1. Алгоритм и блок-схема

### Алгоритм
1.  **Начало**
2.  **Инициализация констант:**
    *   `x = 16.55e-3`
    *   `y = -2.75`
    *   `z = 0.15`
3.  **Вычисления:**
    *   `b = sqrt(10 * (cbrt(x) + pow(x, y+2))) * (pow(asin(z), 2) - fabs(x - y))`
4.  **Вывод результата:**
    *   Вывести значение `b` с точностью 6 знаков.
5.  **Конец**

### Блок-схема
<img width="266" height="607" alt="image" src="https://github.com/user-attachments/assets/eb1c4554-1ff2-4e16-89f9-48ce74658731" />


## 2. Реализация программы
```c
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double x = 16.55e-3;
    double y = -2.75;
    double z = 0.15;

    double b = (sqrt(10 * (cbrt(x) + pow(x, y + 2))) *
    (pow(asin(z), 2) - fabs(x - y)));

    printf("Расчет по формуле:\n");
    printf("x = %.5f\n", x);
    printf("y = %.2f\n", y);
    printf("z = %.2f\n", z);
    printf("---------------------\n");
    printf("Ответ: b = %.6f\n", b);

    return 0;
}
```

## 3. Результат работы программы
```
Расчет по формуле:
x = 0.01655
y = -2.75
z = 0.15
---------------------
Ответ: b = -40.630694
```

## 4. Информация о разработчике
Гусев Данил БИЦТ-261
