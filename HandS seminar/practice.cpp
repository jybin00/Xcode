//
//  practice.cpp
//  CL
//
//  Created by 조유빈 on 12/11/2019.
//  Copyright © 2019 조유빈. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//연결리스트를 구현할 구조체
typedef struct NODE{
    int data;
    struct NODE* next;
}node;


int main(void) {
    /*
     헤드 노드 생성
     링크드 리스트에 10 INSERT
     링크드 리스트에 20 INSERT
     */
    node* head;
    node* node1 = (node *)malloc(sizeof(node));
    node* node2 = (node *)malloc(sizeof(node));
    
    
    
    head->next = node1; //순회용 노드 생성
    node1->next = node2;
    node2->next = NULL;
    node1->data = 10;
    node2->data = 20;
    
    node* curr = head->next;
    while(curr != NULL){ //링크드 리스트 값 조회
        printf("%d\n",curr->data);
            curr= curr->next;
    }
    free(node1);
    free(node2);
    
    return 0;
}
