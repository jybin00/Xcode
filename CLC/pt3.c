#include <stdio.h>

int main(void)
{
    char *p;
    char a[3][4] = {{1,2,3,4},{5,6,7,8},{9,0,10,11}};
    
    p = a;
    int i = 0;
    
    for(i = 0; i<sizeof(a); i++) // 캐릭터는 메모리 크기가 1이고 인티져는 크기가 4이다!!
    {
        printf("a[][] = %d\n",*(p+i)); // 포인터로 배열에 접근
    }

    
    return 0;
}
