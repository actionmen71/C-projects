#include<stdio.h>
#include<stdlib.h>



int main(){
    int*ptr;
    int i;
    // int pointer has been created in the name of ptr
    ptr=malloc(2*sizeof(int));

    for(i=0;i<2;i++){
        printf("enter the value at %d\n",i);
        scanf("%d",&ptr[i]);

    }
    for(i=0;i<2;i++){
         
        printf("%d\n",ptr[i]);

    }



    return 0;

    return 0;
}