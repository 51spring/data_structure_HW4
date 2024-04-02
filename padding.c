#include <stdio.h>
 struct student {
    char lastName[13];   // char형 1byte가 13개 이므로 13 bytes 크기의 배열 lastName 
    int studentId;       // int형 4bytes 크기의 studentId
    short grade;         // short형 2bytes 크기의 grade
 }; // student 구조체 정의
 int main()
 {
    printf("-----2021041002 오원석-----\n");
    struct student pst; // student 구조체 변수 pst 선언
    printf("size of student = %ld\n", sizeof(struct student)); // student 구조체의 크기 출력 
    // student 구조체의 크기는 13 + 4 + 2 = 19 bytes 이지만 24 bytes로 출력된다.
    // 이는 컴파일러가 구조체의 크기를 정할 때 4의 배수로 정하고 padding을 추가하기 때문이다.
    printf("size of int     = %ld\n", sizeof(int)); // int형 변수의 크기 출력
    printf("size of short  = %ld\n", sizeof(short)); // short형 변수의 크기 출력
    return 0;
 }
