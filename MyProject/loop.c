#include <stdio.h>

int main(void) 
{
  // printf("Hello World");
  // return 0;

  // int a = 10;
  // printf("a 는 %d\n", a);
  // a++;
  // printf("a 는 %d\n", a);
  // a++;
  // printf("a 는 %d\n", a);

  // int b = 20;
  // printf("b 는 %d\n",++b); // 21
  // printf("b 는 %d\n",b++); // 21
  // printf("b 는 %d\n",b); // 22

  // for (int i = 0; i <= 10; i++) {
  //   printf("%d\n", i);
  // }

  // while (조건) { }
  // int i = 1;
  // while (i <= 10)
  // {
  //   printf("Hello World %d\n");
  //   i++;
  // }

  // do { } while (조건)
  // int i = 1;
  // do
  // {
  //   printf("Hello World %d\n", i++);
  // } while (i <= 10);

  // 2 중 반복문
  // for (int i = 1; i <= 3; i++)
  // {
  //   printf("첫번째 반복문 : %d\n", i);

  //   for (int j = 1; j <= 5; j++)
  //   {
  //     printf("    두번째 반복문 : %d\n", j);
  //   }
  // }

  // 구구단
  // for (int i = 2; i <= 9; i++) 
  // {
  //   for (int j = 1; j <= 9; j++)
  //   {
  //     printf("%d x %d = %d\n", i, j, i * j);
  //   }
  // }

  // 피라미드
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("*");
    }
      printf("\n");

  }
}