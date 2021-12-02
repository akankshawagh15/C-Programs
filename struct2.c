// store information of 3 books

#include<stdio.h>

#include<string.h>
struct Book
{
    int bid;
    char bnm[50];
    int cost;
};
main()
{
    int i;
    struct Book b[3];
    
    printf("\nEnter all the datails of all books:\nbid\tname\tcost\n");
    for(i=0;i<3;i++)
    {
      scanf("%d %s %d",&b[i].bid,b[i].bnm,&b[i].cost);
    }
    printf("all the books are:\nid\tname:\tcost\n");
    for(i=0;i<3;i++)
    {
       printf("\n%d \t%s\t %d",&b[i].bid,b[i].bnm,&b[i].cost); 
    }
    return 0; 
}