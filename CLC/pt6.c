#include <stdio.h>

int main(void)
{
    char *s[] = {"Joyubeen", "married", "with", "very", "beautiful", "girl"};
    
    printf("s[0] : %s\n", s[0]);
    printf("*(s+1) : %p\n", *(s+1));
    
    return 0;
}
