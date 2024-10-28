//정수 n이 매개변수로 주어질 때, n 이하의 홀수가 오름차순으로 담긴 배열을 return하도록 solution 함수를 완성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc((n + 1)/2 * sizeof(int));
    if ( answer == NULL){
        return NULL;
    }
    int index = 0;
    for ( int i = 1; i <= n; i+=2){
        if ( i % 2 != 0 ){
            answer[index++] = i;
        }
    }
    return answer;
}

int main(){
    int n = 15;
    if ( 1 <= n && n <= 100){
        int* result = solution(n);
        for( int i=0;i<(n + 1)/ 2;i++){
            printf("%d",result[i]);
        }
        free(result);
    }
}