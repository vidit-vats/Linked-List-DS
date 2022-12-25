#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*head=NULL;

struct Node* create_Node(){
    struct Node* n;

    n=(struct Node*)malloc(sizeof(struct Node));
    return n;
}

void insert_data(){
    struct Node *temp,*o1,*t;

    o1=create_Node();
    o1->next=NULL;

    printf("\nEnter the data: ");
    scanf("%d",&o1->data);

    if (head==NULL)
    head=o1;

    else{
         t=head;
         while(t->next!=NULL)
         {
            t=t->next;
         }
         t->next=o1;
    }
}

void view_list(struct Node *head){
    struct Node *t1;
    t1=head;

    if (t1==NULL)
    printf("\nList is empty");

    else{
        printf("\nLinked List: ");
        while(t1!=NULL){
            printf("%d ",t1->data);
            t1=t1->next;
        }
    }
}

// delete_list fucntion deletes first node of list 
void delete_list(){
    struct Node *r;
   
    if (head==NULL)
    printf("\nList is empty");

    else
    {
        r=head;
        head=head->next;
        free(r);
    }

}

int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter the no of nodes: - ");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    insert_data();

    view_list(head);
    delete_list();
    printf("\nAfter Deletion: -");
    view_list(head);

    return 0;
}
