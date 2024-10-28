//정수 배열 numbers와 정수 num1, num2가 매개변수로 주어질 때, numbers의 num1번 째 인덱스부터 num2번째 인덱스까지 자른 정수 배열을 return 하도록 solution 함수를 완성해보세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * (num2 - num1 + 1));
    if (answer == NULL) {
        printf("메모리 할당에 실패했습니다.\n");
        return NULL;
    }
    for(int i=0; num1<=num2;i++,num1++){
        answer[i] = numbers[num1];
    }
    return answer;
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int num1 = 1;
    int num2 = 3;
    bool t = false;
    int size = sizeof(numbers)/sizeof(numbers[0]);
    if ( (0 <= num1  && num1 < num2) && ( 0 < size && num2 < size)){
        t = true;
    }else{
        t = false;
    }

    if(2 <= size <= 30){
        for(int i=0;i<size;i++){
            if( 0 <= numbers[i] && numbers[i] <= 1000){
                t = true;
            }else{
                t = false;
                break;
            }
        }
    }
    if(t){
        int* result = solution(numbers,size,num1,num2);
        if ( result != NULL){
             for (int i = 0; i < (num2 - num1 + 1); i++) {
                printf("%d ", result[i]);
            }
            printf("\n");
            free(result);
        } 
    }
}
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// #include <string.h>

// // numbers_len은 배열 numbers의 길이입니다.
// int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
//     // 동적 메모리 할당 - 필요한 만큼 메모리 할당
//     int* answer = (int*)malloc(sizeof(int) * (num2 - num1 + 1));
//     if (answer == NULL) {
//         printf("메모리 할당에 실패했습니다.\n");
//         return NULL;
//     }

//     // num1부터 num2까지의 값을 복사하여 answer에 저장
//     for (int i = 0; num1 <= num2; i++, num1++) {
//         answer[i] = numbers[num1];
//         printf("%d ", answer[i]);  // 복사된 값을 출력
//     }
//     printf("\n");

//     return answer;
// }

// int main() {
//     int numbers[] = {1, 2, 3, 4, 5};
//     int num1 = 1;
//     int num2 = 3;
//     bool t = false;
//     int size = sizeof(numbers) / sizeof(numbers[0]);

//     // 조건 검사 - num1, num2가 유효한 범위인지 확인
//     if ((0 <= num1 && num1 < num2) && (0 < size && num2 < size)) {
//         t = true;
//     } else {
//         t = false;
//     }

//     // 배열의 길이가 유효한지 확인
//     if (2 <= size && size <= 30) {
//         for (int i = 0; i < size; i++) {
//             if (0 <= numbers[i] && numbers[i] <= 1000) {
//                 t = true;
//             } else {
//                 t = false;
//                 break;
//             }
//         }
//     }

//     // 조건이 맞는 경우에만 solution 함수 호출
//     if (t) {
//         int* result = solution(numbers, size, num1, num2);
//         if (result != NULL) {
//             // 복사된 결과를 출력
//             for (int i = 0; i < (num2 - num1 + 1); i++) {
//                 printf("%d ", result[i]);
//             }
//             printf("\n");
//             free(result);  // 동적 메모리 해제
//         }
//     }

//     return 0;
// }
