//정수 num1과 num2가 주어질 때, num1에서 num2를 뺀 값을 return하도록 soltuion 함수를 완성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int answer = num1 + num2;
    printf("%d",answer);
    return answer;
}
void main(){
    int num = 1;
    int num2 = 2 ;
    solution(num,num2);

}