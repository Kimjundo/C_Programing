//정수 배열 numbers가 매개변수로 주어집니다. numbers의 각 원소에 두배한 원소를 가진 배열을 return하도록 solution 함수를 완성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(numbers_len * sizeof(int));
    if ( answer == NULL){
        return 0;
    }
    for ( int j = 0; j < numbers_len; j++){
        answer[j] = numbers[j] * 2;
    }
    return answer;
}

int main(){
    int numbers[] = {1, 2, 100, -99, 1, 2, 3};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    bool t = false; 
    if(  1 <= size && size <= 1000 ){
        for ( int i=0; i < size ; i++){
            if( (-10000 <= numbers[i]) && ( numbers[i] <= 10000) ){
                t = true;
            }else{
                t = false;
                break; 
            }
        }

    }
    if(t){
        int* result = solution(numbers,size);
        for(int i=0; i < size; i++){
            printf("%d\n",result[i]);
        }
        free(result);
    }
}