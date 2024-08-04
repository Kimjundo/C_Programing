//각에서 0도 초과 90도 미만은 예각, 90도는 직각, 90도 초과 180도 미만은 둔각 180도는 평각으로 분류합니다. 
//각 angle이 매개변수로 주어질 때 예각일 때 1, 직각일 때 2, 둔각일 때 3, 평각일 때 4를 return하도록 solution 함수를 완성해주세요.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int answer = 0;
    printf("%d",angle);
    if(0 < angle && angle < 90)
    {
        answer = 1;
        printf("angle 이 %d 이므로 예각 입니다. %d 를 retrun 합니다.",angle,answer);
        return answer;
        
    }
    else if (angle == 90)
    {
        answer = 2;
        printf("angle 이 %d 이므로 직각 입니다. %d 를 retrun 합니다.",angle,answer);
        return answer;
    }
    else if(90 < angle && angle < 180 )
    {
        answer =3;
        printf("angle 이 %d 이므로 둔각 입니다. %d 를 retrun 합니다.",angle,answer);
        return answer;
    }
    else if(angle == 180)
    {
        answer = 4;
        printf("angle 이 %d 이므로 평각 입니다. %d 를 retrun 합니다.",angle,answer);
        return answer;
    }
    
}

void main()
{
    int angle = 180;
    if ( 0 < angle <= 180)
    {
        solution(angle);
    }
    else
    {
        printf("angle 의 범위를 벚어났습니다.");
    }
}