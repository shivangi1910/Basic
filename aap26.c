#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int d;
    int v;
    struct node *link;
};
struct node * insert(struct node *start,int v,int d)
{
    struct node *p,struct node *tmp=(struct node *)malloc(sizeof(struct node));
    tmp->v=v;
    tmp->d=d;
    tmp->link=NULL;
    if(start==NULL)
    {
        start=tmp;
        return start;
    }
    p=start;
    while(p->link!=NULL)
        p=p->link;
    p->link=tmp;
    return start;
}
int main()
{
    struct node *start1=NULL,*start2=NULL,*start3=NULL;
    printf("Enter the no of nodes in list 1 :");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d%d",&v,&d);
        start1=insert(start1,v,d);
    }
    printf("Enter the no of nodes in list 2 :");
    scanf("%d",&n2);
    for(i=0;i<n1;i++)
    {   
        scanf("%d%d",&v,&d);
        start2=insert(start2,v,d);
    }   
