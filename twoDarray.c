// In the previous tut we created the array with second method
/* We learned that in second method of creating array where we 
we first declared array and then we entered value one by one 
by accessing each position like this arr[0]=1,arr[1]=2.
since doing this manually one by one is cumbersome we created a 
loop to enter the values in the arrays.


Now we will talk about 2D arrays here. */

#include<stdio.h>


int main(){
    // int twoDarr[][]={3,4,5,2};
    // In case of twoD we can't define array without specifying size like in 1D. 

    int twoDarr[][4]={3,4,5,632,3};
    // But after specifying size we can declare and enter value in same line.
    // Again here we don't have to scanf and loop to enter value.

    // int twoDDarr[][4];
    // In this type of array creation we have to mention both sizes


    int twoDDarr[2][4];

    // Now again we can enter value two way either use loop or manual entry
    // In manual entry don't mention the data type again because it will throw error

    twoDDarr[0][0]=2;
    twoDDarr[0][1]=3;
    twoDDarr[1][0]=4;
    twoDDarr[1][1]=5;

    printf("Values of twoDDarr by manual entry\n");
    printf("%d\n",twoDDarr[0][0]);
    printf("%d\n",twoDDarr[0][1]);
    printf("%d\n",twoDDarr[1][0]);
    printf("%d\n",twoDDarr[1][1]);


    printf("taking values for array by loop\n");
    // Since we taking input using loop
    // In case 1D array we were using one loop
    // Here we have to use two loops because we have to take values for both row and column
    // one loop will take values for i postion and other values will take j position
    // like in matrix
    // 1[ith position,   jth position]   2   3 
    // 3[row position,column position]   4   5
    // 6[row=3,column=1]                 7   8
    // 9[i=3,j=0(when in c program)]     10  11

    // Notice how arrays position is different in C program when compared to maths matrix position
    // Because arrays are initialized with 0 the row and columns will take 0th position first
    // That's why it is best to use loop for taking values then it will not create confusion
    // If we take input by manual scanf function we have to keep all this in mind.
    // This confusion could create a major error
    // If we confuse will proper address of 2D arrays then we will get random values as result

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("enter value for arr[%d][%d]",i,j);
            scanf("%d",&twoDDarr[i][j]);
        }

    }

    printf("Values of twoDDarr by loop entry\n");
     for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d",twoDDarr[i][j]);
            
        }

    }

    // Output in normal form 12345678
    printf("\n");

    printf("Values of twoDDarr by loop entry in matrix form\n");
     for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d",twoDDarr[i][j]);
            
        }
        printf("\n");
        // The loop runs like this
        // i=0,j=0,1,2,3
        // i=1,j=0,1,2,3
        // so when i=0 then 00,01,02,03 are the arr addresses
        // and when i=1 then 10,11,12,13 are the arr addresses
        // so by printing new line in this place will run 
        // the second row in new line which will make it appear
        // as matrix but internally it is stored in one line
    }

    


    
     

}


     













/* Why column size is necessary and not row size, to understand this let's take an example
suppose these elements in the array: 1,2,3,4,5,6,7,8,9,0,11,12,13
So there are 13 elements which needs to be put into the array.

first case
when arr2D[2][]={1,2,3,4,5,6,7,8,9,0,11,12,13}
In this case we have decide row but how can we do it. without column size how do we decide how many 
elements to put in each row.
2,3,4,
9,0,11,12,13
6,7,8,9,0
so without column size there is inconsistency in the array.

second case
when arr2D[][2]={1,2,3,4,5,6,7,8,9,0,11,12,13}
In this case it is required to take 2 elements in each column
1,2
3,4
5,6
1,2
3,4
5,6
Simply by putting column size we automatically create row size also.
That's why in case of 2D array we can do without row size but not column size. */