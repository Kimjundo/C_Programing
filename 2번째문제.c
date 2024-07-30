//정수 num1, num2가 매개변수 주어집니다. num1과 num2를 곱한 값을 return 하도록 solution 함수를 완성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = num1 * num2;
    printf("%d",answer);
    return answer;
}
void main(){
    int num = 1, num2 = 2;
    if ( 0< num <= 100 && 0< num2 <=100 ){
        solution(num,num2);
    }
}