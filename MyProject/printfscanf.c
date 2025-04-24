#include <stdio.h>
int main(void) {
	// 정수형 변수에 대한 예제
	//int age = 12;
	//printf("%d\n", age); // %d는 age의 정수를 받아오는 자리를 의미
	//age = 13;
	//printf("%d\n", age);

	// 실수형 변수에 대한 예제
	//float f = 46.5f;
	//printf("%.2f\n", f); // %f는 실수형을 받아오는 자리이며 .2는 소숫점 둘째자리까지 표시하는걸 의미
	//double d = 4.428;
	//printf("%.2lf\n", d); // double은 %lf로 받을수있음

	// 상수에 대한 예제
	//const int YEAR = 2000;
	//printf("태어난 년도 : %d%n", YEAR);
	//YEAR = 2001; 상수이기 때문에 변경 불가

	// printf
	// 연산
	//int add = 3 + 7; // 10
	//printf("3 + 7 = %d\n", add);
	//printf("%d + %d = %d\n", 30, 79, 30 + 79);

	// scanf
	// 키보드 입력을 받아서 저장
	//int input;
	//printf("값을 입력하세요 : ");
	//scanf_s("%d", &input); // &input의 의미는 input이라는 변수가 있는곳에 값을 입력받겠다는 의미
	//printf("입력값 : %d\n", input);
	//int one, two, three;
	//printf("3개의 정수를 입력하세요 : ");
	//scanf_s("%d %d %d", &one, &two, &three);
	//printf("첫번째 값 : %d\n", one);
	//printf("두번째 값 : %d\n", two);
	//printf("세번째 값 : %d\n", three);

	// 문자, 문자열
	//char c = 'A';
	//printf("%c\n", c);
	//char str[256];
	//scanf_s("%s", str, sizeof(str));
	//printf("%s\n", str);
	return 0;
}