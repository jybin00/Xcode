//
//  pt4.c
//  CL
//
//  Created by 조유빈 on 07/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char *s = "string";
    
    printf("s의 시작 주소 : %p\n",s);
    printf("s의 문자열 : %s\n\n",s); // %s하면 그냥 문자열 전체 출력 됨. 이때는 널 문자 전까지 다 가져옴.
    
    for(int i = 0; i<7; i++) // 반복문으로 출력해보기
    {
        printf("s의 주소 : %p\n",s+i); // 역시 문자 포인터는 주소가 1씩 늘어난다.
        printf("s의 문자열 : %c\n",*(s+i)); // 캐릭터로 뽑을 때는 실제 값을 넣어주어야한다.
        // 실제 값이란 아스키 코드 값을 의미한다.
    }
    
    return 0;
}
