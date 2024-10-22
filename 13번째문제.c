//머쓱이네 양꼬치 가게는 10인분을 먹으면 음료수 하나를 서비스로 줍니다. 양꼬치는 1인분에 12,000원, 음료수는 2,000원입니다. 정수 n과 k가 매개변수로 주어졌을 때, 양꼬치 n인분과 음료수 k개를 먹었다면 총얼마를 지불해야 하는지 return 하도록 solution 함수를 완성해보세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    answer = (n * 12000) + (k * 2000) - (n/10 * 2000);
    return answer;
}

int main(){
    int n =10;
    int k = 3; 
    if( (0 < n < 1000) && ( n/10 < k < 1000)){
        printf("%d인분을 시켜 서비르로 음류수 %d 받아 총 %d 원 입니다. ",n,n/10,solution(n,k));
    }
}