// //두 배열이 얼마나 유사한지 확인해보려고 합니다. 문자열 배열 s1과 s2가 주어질 때 같은 원소의 개수를 return하도록 solution 함수를 완성해주세요.
// #include <stdio.h>
// #include <stdbool.h>
// #include <stdlib.h>
// #include <string.h>
// // s1_len은 배열 s1의 길이입니다.
// // s2_len은 배열 s2의 길이입니다.
// // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len) {
//     int answer = 0;
//     int max = 0;
//     (s1_len > s2_len) ? (max=s1_len) : (max=s2_len);
//     for ( int i=0;i < max; i++){
//         if(s1[i] == s2[i]){
//             answer += 1;
//             printf("s1[i] 의 값: %c, s2[i]의 값: %c\n",s1[i],s2[i]);
//         }else{
//             answer += 0;
//         }

//     }
//     return answer;
// }

// int main(){
//     const char* s1[] = {"a", "b", "c"};
//     const char* s2[] = {"com", "b", "d", "p", "c"};
//     bool t = false;
//     int count = 0;
//     int s1_len = sizeof(s1)/sizeof(s1[0]);
//     int s2_len = sizeof(s2)/sizeof(s2[0]);
//     if ((1 <= s1_len <=100) && (1 <= s2_len <= 100)){
//         for(int i=0;i < s1_len;i++){
//             count = strlen(s1[i]);
//             if(1 <= count <= 10) t = true;
//             else   t =false; break;

//         }
//         count = 0;
//         for(int j=0;j < s1_len;j++){
//             count = strlen(s2[j]);
//             if( 1 <= count <= 10) t = true;
//             else t = false; break;
//         }
//     }
//     if( t == true){
//         printf("%d",solution(s1,s1_len,s2,s2_len));
//     }
// }
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// s1_len은 배열 s1의 길이입니다.
// s2_len은 배열 s2의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len) {
    int answer = 0;

    // 이중 for문을 사용하여 두 배열에서 공통 요소를 찾습니다.
    for (int i = 0; i < s1_len; i++) {
        for (int j = 0; j < s2_len; j++) {
            // 문자열을 비교할 때 strcmp() 사용 (s1[i]와 s2[j]가 동일한지 확인)
            if (strcmp(s1[i], s2[j]) == 0) {
                answer += 1;  // 공통된 문자열이 발견되면 answer 값을 증가시킴

                // 공통된 문자열이 발견되면 해당 내용을 출력
                printf("s1[%d]의 값: %s, s2[%d]의 값: %s\n", i, s1[i], j, s2[j]);

                // 중복 카운트를 피하기 위해 현재 문자열이 발견되면 내부 루프를 종료
                break;
            }
        }
    }
    return answer;  // 최종적으로 공통된 문자열의 개수를 반환
}

int main() {
    // 문자열 배열 정의
    const char* s1[] = {"a", "b", "c"};
    const char* s2[] = {"com", "b", "d", "p", "c"};
    bool t = false;
    int count = 0;

    // 배열의 길이 계산
    int s1_len = sizeof(s1) / sizeof(s1[0]);
    int s2_len = sizeof(s2) / sizeof(s2[0]);

    // 배열 길이가 유효한지 확인 (1 <= 길이 <= 100)
    if ((1 <= s1_len && s1_len <= 100) && (1 <= s2_len && s2_len <= 100)) {
        // s1 배열의 각 문자열 길이를 검사하여 조건에 맞는지 확인
        for (int i = 0; i < s1_len; i++) {
            count = strlen(s1[i]);  // 문자열 길이 계산
            if (1 <= count && count <= 10) {  // 각 문자열의 길이가 1에서 10 사이인지 확인
                t = true;
            } else {
                t = false;  // 조건에 맞지 않는 문자열이 있으면 t를 false로 설정하고 루프 종료
                break;
            }
        }

        // s2 배열의 각 문자열 길이를 검사하여 조건에 맞는지 확인
        for (int j = 0; j < s2_len; j++) {
            count = strlen(s2[j]);  // 문자열 길이 계산
            if (1 <= count && count <= 10) {  // 각 문자열의 길이가 1에서 10 사이인지 확인
                t = true;
            } else {
                t = false;  // 조건에 맞지 않는 문자열이 있으면 t를 false로 설정하고 루프 종료
                break;
            }
        }
    }

    // 조건에 맞는 경우에만 solution 함수 호출
    if (t) {
        printf("%d\n", solution(s1, s1_len, s2, s2_len));  // 공통된 문자열 개수를 출력
    }

    return 0;
}


