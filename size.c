#include<stdio.h>
#include<stdlib.h> /* 난수생성, 문자열을 다른 형식으로 변환 동적메모리 관리등을 포함하는 라이브러리 */
void main()
{    
    printf("-----2021041002 오원석-----\n");
    int **x;// int형 더블포인터 x 선언, 초기화x
    printf("%p %p",&x,&(*x));
    printf("sizeof(x) = %lu\n", sizeof(x)); // 포인터 x가 가리키는 주소의 크기
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // 포인터 *x가 가리키는 주소의 크기
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // **x가 가리키는 int형 변수의 크기
}
// %lu는 unsigned long 형식으로 부호 없는 정수를 출력한다.
