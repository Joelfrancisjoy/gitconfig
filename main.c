/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}*/


#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node * link;
};

int main()
{
    struct node * head = NULL;
    head = (struct node*)malloc(sizeof(struct node));

    head->data = 46;
    head->link = NULL;

    printf("%d : ",head->data);

    struct node * first = NULL;
    first = (struct node*)malloc(sizeof(struct node));

    first->data = 34;
    first->link = NULL;

    printf("%d ",first->data);
    head->data = first;
    return 0;

}










































