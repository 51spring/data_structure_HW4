 #include <stdio.h>
 struct student1 {
    char lastName; // char형 변수 lastName
    int  studentId; // int형 변수 studentId
    char grade; // char형 변수 grade
 }; // student1 구조체 정의

 typedef struct {
    char lastName; // char형 변수 lastName
    int  studentId; // int형 변수 studentId
    char grade; // char형 변수 grade
 } student2; // typedef를 이용한 student2 구조체 정의


    int main() {
    printf("-----2021041002 오원석-----\n");
    
    struct student1 st1 = {'A', 100, 'A'}; 
    /* student1 구조체 변수 st1 선언 및 
     lastName = 'A', studentId = 100, grade = 'A'로 초기화 */
    printf("st1.lastName = %c\n", st1.lastName); // st1.lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); // st1.studentId 출력
    printf("st1.grade = %c\n", st1.grade); //st1.grade 출력

    student2 st2 = {'B', 200, 'B'}; // typedef로 선언된 student2 구조체 변수 st2 선언 및 초기화
    printf("\nst2.lastName = %c\n", st2.lastName); // st2.lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); // st2.studentId 출력
    printf("st2.grade = %c\n", st2.grade); // st2.grade 출력

    student2 st3; //student2 구조체 변수 st3 선언
    st3 = st2; // st2의 값들을 st3에 복사

    printf("\nst3.lastName = %c\n", st3.lastName); 
    // st3.lastName 출력하는데 st3.lastName는 st2.lastName와 같다.
    printf("st3.studentId = %d\n", st3.studentId);
    // st3.studentId 출력하는데 st3.studentId는 st2.studentId와 같다.
    printf("st3.grade = %c\n", st3.grade);
    // st3.grade 출력하는데 st3.grade는 st2.grade와 같다.

    
    printf("%d\n",sizeof(st1)); // st1의 크기
    printf("%p %p %p\n", &st1, &st2, &st3); // st1, st2, st3의 주소 출력
    //st1, st2, st3의 주소는 연속적으로 할당되어있음
    
    // if(st3 == st2) /* not working */
    // 구조체변수는 비교연산자로 비교할수 없고 각각의 멤버변수를 비교해야한다.
    //      printf("equal\n");
    // else
    //      printf("not equal\n");

    // 수정한 구조체 변수 비교 코드
    if (st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade)
        //st2와 st3의 각 멤버변수들을 비교
        printf("equal\n");
    else
        printf("not equal\n");
    return 0;
 }
