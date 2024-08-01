//정수 num1과 num2가 매개변수로 주어집니다. 두 수가 같으면 1 다르면 -1을 retrun하도록 solution 함수를 완성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = 0;
    if ( num1 == num2)
    {
        answer = 1 ;
        printf("num1 이 %d 이고 num2 가 %d 이므로 같습니다. 따라서 1을 retrun 합니다.",num1,num2);
        return answer;
    }
    else 
    {
        answer = -1;
        printf("num1 이 %d 이고 num2 가 %d 이므로 다릅니다. 따라서 -1을 retrun 합니다.",num1,num2);
        return answer;
    }
    return answer;
}

void main (){
    int num =1 ,num2 =2 ;
    if(0 <= num <=10000 && 0 <= num2 <=10000 ){
        solution(num,num2);
    }
}