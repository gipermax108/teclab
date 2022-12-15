#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
  int a[1]; // объявлен массив a из 1 элемента
  int i;
  // Ввод элементов массива
  for (i = 0; i<10; i++) 
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]); // &a[i] - адрес i-го элемента массива
  }
  // Вывод элементов массива
  for (i = 0; i<10; i++)
    printf("%d ", a[i]); // пробел в формате печати обязателен
  getchar(); getchar();
  return 0;
}