//정수가 담긴 배열 array와 정수 n이 매개변수로 주어질 때, array에 n이 몇 개 있는 지를 return 하도록 solution 함수를 완성해보세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    for(int i=0;i<array_len;i++){
        if(array[i] == n){
            answer += 1 ;
        }
    }
    return answer;
}

int main(){
    int array[] = {1, 1, 2, 3, 4, 5};
    int n = 1; 
    int size = sizeof(array)/sizeof(array[0]);
    bool t = false; 
    if ( (0 <= n && n <= 1000) && ( 0 <= size && size <= 100)){
        for(int i=0;i<size;i++){
            if( 0<=array[i] && array[i] <= 1000 ){
                t = true;
            }else{
                t = false;
                break;
            }
        }
    }
    if(t){
        printf("%d",solution(array,size,n));
    }
}