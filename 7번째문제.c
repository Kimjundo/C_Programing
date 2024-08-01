// 정수  배열 numbers가 매개변수로 주어집니다.
// numbers의 원소의 평균값을 return하도록 solution 함수를 완성해주세요.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
double solution(int numbers[], size_t numbers_len) {
    double answer = 0;
    printf("정상 작동 합니다.");
    return answer;
}

void main()
{
    int numbers [] = {1, 2, 3, 4, 5, 6 ,7,8,9,10};
    bool check = false ; 
    for (int i = 0; i <= sizeof(numbers)/sizeof(numbers[0]); i ++)
    {
        if( 1<= numbers[i] <= 1000)
        {
            check = true;
        }
        else 
        {
            check = false; 
            break;
        }
    }
    if(0 <= sizeof(numbers)/sizeof(numbers[0]) <= 100 && check )
    {
        solution(numbers,sizeof(numbers)/sizeof(numbers[0]));
    }
}