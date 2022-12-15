#include <stdio.h>

#include <conio.h>

#include <math.h>

#define n 10 // задали число слагаемых

 

void main(void)

{

float s; int k;

clrscr( ); // ОЧИСТКА ЭКРАНА

puts("\n ЛАБОРАТОРНАЯ РАБОТА N3 - ОПЕРАТОРЫ ЦИКЛА ");

puts("\n ===========================================\n");

s=0;

for (k=1; k<=n; k++)

{

s=s+1.0/k;

printf(" \t\n k=%d s=%f 1.0/k=%f", k, s, 1.0/k);

}

puts("\n");

printf("\a\n ОТВЕТ: s=%f, Press any key...",s);

getch( ); /* ЗАДЕРЖКА ДО НАЖАТИЯ КЛАВИШИ ENTER */

}

