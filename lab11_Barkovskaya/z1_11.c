/* Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, 
а если равны, то присвоить переменным нулевые значения. Вывести новые значения переменных A и B. */

#include <stdio.h>

int main()
{
    int A, B;
    printf("A : ");
    scanf("%d", &A);
    printf("\nB : ");
    scanf("%d", &B);
    if (A > B) B = A;
    else if (B > A) A = B;
    else {A = 0; B = 0;}
    printf("\nA = %d, B = %d", A, B);
    return (0);
}