#include <stdio.h>
#include <stdlib.h>

int n,m,curelem,hi,*ht,key,flag;

void createht() {
    ht = (int *)malloc(m * sizeof(int));
    if (m == 0)
    {
        printf("The hash table is empty");
        exit(0);
    }
    else {
        for (int i = 0;i < m;i++)
        {
            ht[i] = -1;
        }    
    }
}

void insertht(int key) {
        hi = key%m;
        while(ht[hi]!= -1) {
            hi = (hi  + 1) % m;
            flag = 1;
        }
        if (flag)
        {
            printf("Collision detected and avoided\n");
            flag = 0;
        }
        ht[hi] = key;
        curelem++;  
}

void displayht() {
    if (curelem == 0)
    {
        printf("The hash table is empty");
        return;
    }
    else {
        printf("The hash table contents are \n");
        for(int i = 0; i < m; i++)
        {
            printf("\n[%d]-->%d ",i,ht[i]);
        }
        
    }
}

void main() {
    printf("Enter the no of records : ");
    scanf("%d",&n);
    printf("Enter the memory locations : ");
    scanf("%d",&m);
    createht();
    printf("Enter the key : ");

    //In book i used a for loop
    while (curelem!=n)
    {
    if (curelem==m) {
        printf("HT is full");
        break;
    }
    scanf("%d",&key);
    insertht(key);
    }
    displayht();    
}