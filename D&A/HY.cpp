#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

typedef struct node {
    char name[50], genre[50] = {};
    int month, date = 0;
    struct node *next;
}node;

typedef struct Queue {
    node *front;
    node *rear;
    int count;
}Queue;

void queue_init(Queue *queue) {
    //Initializing needed in order to use the queue
    queue->front = queue->rear = NULL;
    queue->count = 0;
}

int isEmpty(Queue *queue) {
    //Check whehter the queue is empty or not
    return (queue->count == 0);
}

void display_node(node *node) {
    printf("\nName: %s", node->name);
    printf("\nFavorite Genre: %s", node->genre);
    printf("\nBirthday: %d/%d", node->month, node->date);
    printf("\n");
}

void data_in(Queue *queue) {
    node *now = (node *)malloc(sizeof(node));
    node *tmp = (node *)malloc(sizeof(node));
    FILE *f;
    f = fopen("list.txt", "r");
    tmp = queue -> front;
    
    for (int i = 0; i < 15; i++){
        
        char first[30], last[30] = {};
        fscanf(f, "%s %s - %d/%d - %s\n", first, last, &now->month, &now->date, now->genre);
        printf("%s %s - %d/%d - %s\n",first, last, now -> month, now -> date, now -> genre );
        
        for (int j = 0; j < 30; j++) {
            if (j < strlen(first))
                now->name[j] = first[j];
            
            else if (j-strlen(first) < strlen(last))
            {
                now->name[j] = last[j - strlen(first)];
            }
            else now->name[j] = NULL;
        }
        now -> next = queue -> front-> next;
        queue -> front -> next = now;
        queue->count++;
    }
    fclose(f);
}

void search(Queue *queue) {
    node *now = queue->front;
    
    char c[20], check[20] = {};
    int ch, cnt = 0;
    
    printf("Which section do you want to search? (Genre or Month): ");
    scanf("%s", &c);
    
    if (strcmp(c, "Genre") == 0) {
        printf("Type the genre: ");
        scanf("%s", &check);
        
        for (int i = 0; i < queue->count; i++) {
            if (now != NULL) {
                if (strcmp(queue ->front->genre, check)) {
                    display_node(queue->front);
                    queue -> front = queue -> front -> next;
                    cnt = 1;
                }
            }
        }
        if (cnt == 0) printf("\n.....No results found...");
    }
    else if (strcmp(c, "Month") == 0) {
        printf("Type month as an integer: ");
        scanf("%d", &ch);
        
        for (int j = 0; j < queue->count; j++) {
            if (now != NULL) {
                if (queue -> front->month == ch) {
                    display_node(now);
                    queue -> front = queue -> front -> next;
                    cnt = 1;
                }
            }
        }
        if (cnt == 0) printf("\n.....No results found...");
    }
}

int main(void) {
    int check = 1;
    Queue DSA;
    queue_init(&DSA);
    
    data_in(&DSA);
    
    while (check == 1) {
        search(&DSA);
        printf("Do you want to continue searching? (1 or 0): ");
        scanf("%d", &check);
    }
    
    system("pause");
    return 0;
}
