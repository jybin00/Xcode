//
//  str3.c
//  CL
//
//  Created by 조유빈 on 06/12/2018.
//  Copyright © 2018 조유빈. All rights reserved.
//

#include <stdio.h>

struct roll
{
    int id;
    char name[20];
    int grade;
};

int main(void)
{
    struct roll s[3] =   {{1, "yubeen", 40},
                        {2, "junghun", 50},
                        {3, "myeongjun", 60}};
    
    int i=0;
    for(i = 0; i < 3; i++)
    {
        printf("%3d %9s %4d\n",s[i].id, s[i].name, s[i].grade);
    }
    return 0;
}


