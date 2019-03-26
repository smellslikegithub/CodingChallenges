#include<stdio.h> // includes the standard input output library

struct ValueItem
{
    int * value;
    struct ValueItem* next;
};

struct ValueItem* prependValue(int val, struct ValueItem* list)
{

    struct ValueItem *link = (struct ValueItem*) malloc(sizeof(struct ValueItem));
    link->value = val;

    if(list==NULL){
        link->next = NULL;
        list = link;
    }

    else{
        link->value = val;
        link->next = list;
        list = link;
    }
    return list;
};

void printList(struct ValueItem* list)
{
    while(list!=NULL){
        printf("%d %s ",list->value," ");
        list = list->next;
    }
}

int main(int argc, char** argv)
{
    struct ValueItem* mylist;

    mylist = prependValue(42,NULL);
    mylist = prependValue(1337,mylist);
    mylist = prependValue(28,mylist);
    mylist = prependValue(50,mylist);
    mylist = prependValue(150,mylist);
    mylist = prependValue(25,mylist);


    printList(mylist);
}
