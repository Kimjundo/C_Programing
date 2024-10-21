//문자열 my_string과 문자 letter이 매개변수로 주어집니다. my_string에서 letter를 제거한 문자열을 return하도록 solution 함수를 완성해주세요.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 문자열에서 특정 문자를 제거하는 함수
char* solution(const char* my_string, const char* letter) {
    // 동적 할당을 위해 제거 후 최대 길이는 원래 문자열의 길이와 같다고 가정합니다.
    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1); // 문자열 길이 + 1 (널 종료 문자 포함)

    if (answer == NULL) { // malloc 실패 시
        return NULL;
    }

    int index = 0;
    for (int i = 0; i < len; i++) {
        if (my_string[i] != letter[0]) { // letter와 일치하지 않는 문자만 answer에 추가
            answer[index++] = my_string[i];
        }
    }
    
    answer[index] = '\0'; // 널 종료 문자 추가

    return answer;
}

int main() {
    const char* my_string = "abcdef";
    const char* letter = "f";
    
    char* result = solution(my_string, letter);
    if (result != NULL) {
        printf("결과 문자열: %s\n", result);
        free(result); // 동적 할당 해제
    }

    return 0;
}