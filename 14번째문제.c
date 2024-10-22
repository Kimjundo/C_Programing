//어떤 자연수를 제곱했을 때 나오는 정수를 제곱수라고 합니다. 정수 n이 매개변수로 주어질 때, n이 제곱수라면 1을 아니라면 2를 return하도록 solution 함수를 완성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(i * i == n){
            count = i;
        }
    }
    answer = (count > 0) ? 1 : 2;
    return answer;
}

int main(){
    int n = 976;
    if( 1<= n <= 1000000){
        printf("%d",solution(n));
    }

}