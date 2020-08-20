#include <stdio.h> // 표준입출력 라이브러리
#include <stdlib.h> // 표준 라이브러리

int main()
{
    int i,j,k = 0; // for 문을 위한 정수 선언
    char alpha[26] ={0}; // 알파벳 저장을 위한 array 선언
    
    srand(67); // seed number 67
    
    for(i = 0; i < 26; i++)
    {
        alpha[i] = rand()%26+65; // 유니코드로 알파벳 출력
        for(j = 0; j<i; j++)
        {
            if(alpha[i] == alpha[j])
            {
                i = i-1;
            }
        }
    }
    for(k = 0; k<26; k++)
    {
        printf("%c\n",alpha[k]);
    }
    
}

