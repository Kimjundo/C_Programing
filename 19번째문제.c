//머쓱이는 학교에서 키 순으로 줄을 설 때 몇 번째로 서야 하는지 궁금해졌습니다. 머쓱이네 반 친구들의 키가 담긴 정수 배열 array와 머쓱이의 키 height가 매개변수로 주어질 때, 머쓱이보다 키 큰 사람 수를 return 하도록 solution 함수를 완성해보세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int height) {
    int answer = 0;
    for(int i=0;i<array_len;i++){
        if(array[i]>height){
            answer += 1;
        }
    }
    return answer;
}


int main(){
    int array[] = {180, 120, 140};
    int height = 190;
    int size = sizeof(array)/sizeof(array[0]);
    bool t = false;
    if( (1 <= height && height <= 200) && (1<= size && size <= 100)){
        for(int i=0; i <size;i++){
            if( 1<= array[i] && array[0] <= 200){
                t = true;
            }else{
                t = false;
                break;
            }
        }
    }
    if(t){
        printf("%d",solution(array,size,height));
    }
} 