//머쓱이는 선생님이 몇 년도에 태어났는지 궁금해졌습니다. 
//2022년 기준 선생님의 나이 age가 주어질 때, 선생님의 출생 연도를 return 하는 solution 함수를 완성해주세요
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int age) {
    int answer = 0;
    answer = (2022 - age) + 1;
    printf("2022년 기준 %d살이므로 %d년생 입니다.",age,answer);
    return answer;
}

void main(){
    int age = 23;
    if (0 < age <= 120){
        solution(age);
    }
}