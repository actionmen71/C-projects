// We can access forward or backward addresses using pointer arithmetic
// ++,--,+,-


#include<stdio.h>



int main(){
    int b=3;
    int* ptr=&b;
    printf("This is current address of pointer due to b:%d\n",ptr);
    printf("This is current value of pointer due to b:%d\n",*ptr);
    printf("This is next integer position of pointer:%d\n",ptr+1);
    // adds 4 integer position due size of integer is 4 byte, in case of char it will add only 1.
    printf("This is next integer position of pointer:%d\n",ptr+1);
    printf("This next line will probably not run because value at next pointer position doesn't exist.\n");
    printf("This is value next integer position of pointer:%d\n",*ptr+1);
    // *ptr = 3, 3+1=4 , that's what happened
    ptr++;
    printf("%d\n",ptr);



    return 0;
}