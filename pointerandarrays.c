// okay so far we have assigned a variable to pointer
// we will now assign arrays to pointer
// pointer= arrar[3,2,5,3,2,2,5,2,3]
// here pointer stores the first address of the array
// pointer =& arrar[0]


#include<stdio.h>



int main(){
    int arr[]={1,2,3,45,6,5};
    // standard way of printing array values
    printf("Standard way for values\n");
    printf("The value at position 0:%d\n",arr[0]);
    printf("The value at position 1:%d\n",arr[1]);
    printf("The value at position 2:%d\n",arr[2]);
    printf("The value at position 3:%d\n",arr[3]);
    //  Ways to print array address
    printf("standard way for Addresses\n");
    printf("The address of position 0:%d\n",&arr[0]);
    printf("The address of position 1:%d\n",&arr[1]);
    printf("The address of position 2:%d\n",&arr[2]);
    printf("The address of position 3:%d\n",&arr[3]);
    // pointer way of printing array addresses
    printf("The pointer way for Addresses\n");
    printf("The address of position 0:%d\n", arr);
    printf("The address of position 1:%d\n", arr+1);
    printf("The address of position 2:%d\n", arr+2);
    printf("The address of position 3:%d\n", arr+3);
    // pointer way to print array values
    printf("The pointer way for values\n");
    printf("The value at position 0:%d\n",*(arr));
    printf("The value at position 1:%d\n",*(arr+1));
    printf("The value at position 2:%d\n",*(arr+2));
    printf("The value at position 3:%d\n",*(arr+3));


    // So we have seen different ways to print using pointer arithmetic
    // Now we will create a pointer

    int*ptr=arr;

    printf("The address of ptr is:%d\n",ptr);
    // The address of ptr is position 0 of arr as we have discussed above
    printf("The value of pointer is:%d\n",*ptr);
    // deferencing gives first positional value of arr as obvious it is

    ptr++;
    // now ptr stores second positional address and value of arr
    // it will remain so from now here on
    printf("The address of ptr++:%d and value is :%d\n",ptr,*ptr);
    
    return 0;
}