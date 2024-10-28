//중앙값은 어떤 주어진 값들을 크기의 순서대로 정렬했을 때 가장 중앙에 위치하는 값을 의미합니다. 예를 들어 1, 2, 7, 10, 11의 중앙값은 7입니다. 정수 배열 array가 매개변수로 주어질 때, 중앙값을 return 하도록 solution 함수를 완성해보세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int temp = 0;
    for( int i=0; i < array_len; i++){
        for ( int j=0;j < (array_len-1) - i;j++){
            if( array[j]>array[ j + 1]){
                temp = array[j];
                array[j] = array[ j+ 1];
                array[j + 1] = temp;
            }
        }
    }
    return answer = array[array_len/2];
}

int main(){
    int array[] = { 1, 2, 7, 10, 11};
    int size = sizeof(array)/sizeof(array[0]);
    bool t = false;
    if( ( 0 < size && size  < 100) && ( !(size % 2 == 0))){
        for ( int i=0;i<size;i++){
            if( -1000 < array[i] && array[i] < 1000){
                t = true;
            }else{
                t = false;
                break;
            }
        }
    }
    if (t){
        printf("%d",solution(array,size));
    }
}