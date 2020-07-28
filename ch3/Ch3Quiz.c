#include <stdio.h>
// // Quiz1

// int main(void){
//     int num1, num2;
//     printf("첫번째 수 : ");
//     scanf("%d",&num1);
//     printf("두번째 수 : ");
//     scanf("%d",&num2);

//     printf("덧셈 : %d + %d = %d\n",num1,num2,num1+num2);
//     printf("뺄셈 : %d - %d = %d\n",num1,num2,num1-num2);
//     return 0;
// }

// // Quiz2
// int main(void){
//     int num1, num2, num3;
//     printf("첫번째 수 : ");
//     scanf("%d",&num1);
//     printf("두번째 수 : ");
//     scanf("%d",&num2);
//     printf("세번째 수 : ");
//     scanf("%d",&num3);

//     printf("연산 결과 : %d * %d + %d = %d\n",num1,num2,num3,num1*num2+num3);
//     return 0;
// }

// // Quiz3
// int main(void){
//     int num1;
//     printf("정수 입력 : ");
//     scanf("%d",&num1);
//     printf("제곱 : %d\n",num1*num1);
//     return 0;  
// }

// // Quiz4
// int main(void){
//     int num1, num2;
//     printf("첫번째 수 : ");
//     scanf("%d",&num1);
//     printf("두번째 수 : ");
//     scanf("%d",&num2);
//     printf("몫 : %d, 나머지 : %d",num1/num2, num1%num2);
//     return 0;
// }

// Quiz5
int main(void){
    int num1,num2,num3;
    printf("첫번째 수 : ");
    scanf("%d",&num1);
    printf("두번째 수 : ");
    scanf("%d",&num2);
    printf("세번째 수 : ");
    scanf("%d",&num3);
    printf("결과 : %d",(num1-num2)*(num2+num3)*(num3%num1));
    return 0;
}