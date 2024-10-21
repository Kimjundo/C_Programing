//정수 n이 매개변수로 주어질 때 n의 각 자리 숫자의 합을 return하도록 solution 함수를 완성해주세요
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int temp = n;  // n의 복사본을 사용합니다.

    // 자릿수의 합을 구합니다.
    while (temp != 0) {
        answer += temp % 10;  // 마지막 자릿수를 더합니다.
        temp /= 10;           // 마지막 자릿수를 제거합니다.
    }
    printf("%d",answer);
    return answer;
}



int main(){
    int n = 930211;
    int min =0;
    int max = 1000000;
    if (  (min <= n) && (n <= max) ){
        solution(n);
    }else{
        printf("범위를 벗어났습니다.");
    }

}