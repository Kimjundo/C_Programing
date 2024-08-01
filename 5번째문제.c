//정수 num1, num2가 매개변수로 주어질 때, 
//num1을 num2로 나눈 몫을 return 하도록 solution 함수를 완성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    answer = num1 / num2;
    printf("num1 이 %d, num2가 %d 이므로  %d을%d 로 나눈 몫 %d를 return 합니다. ", num1,num2,num1,num2,answer);
    return answer;
}

void main()
{
    int num1 = 10, num2 =5 ;
    if(0 < num1 < 100 && 0< num2 <= 100)
    {
        solution(num1,num2);
    }
}