//정수 n이 주어질 때, n이하의 짝수를 모두 더한 값을 return 하도록 solution 함수를 작성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int ls  = 0;
    printf("n이 %d 이므로 ",n);
    for(int i=0; i<=n;i++)
    {
        if(i % 2 == 0 )
        {
            answer += i;
             ls = i;
             printf("% d +" ,ls);
             
        }
        
    }
    printf("= %d 를 return 합니다.",answer);
    return answer;
}

void main()
{
    int n = 10;
    if (0 < n && n <= 1000)
    {
        solution(n);
    }
    else
    {
        printf("범위를 벚어났습니다.");
    }
}