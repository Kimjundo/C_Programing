//머쓱이는 할머니께 생신 축하 편지를 쓰려고 합니다. 할머니가 보시기 편하도록 글자 한 자 한 자를 가로 2cm 크기로 적으려고 하며, 편지를 가로로만 적을 때, 축하 문구 message를 적기 위해 필요한 편지지의 최소 가로길이를 return 하도록 solution 함수를 완성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* message) {
    int answer = 0;
    int len = strlen(message);
    for (int i=0;i<len;i++){
        answer+=2;
    }
    printf("message 의 글수가 %d개로 최소 가로 %d의 편지가 필요 합니다.",len,answer);
    return answer;
}

int main(){
    const char* message = "happy birthday!";
    if( ( 0< strlen(message)) && (strlen(message) <= 50) ){
        solution(message);
    }

}

