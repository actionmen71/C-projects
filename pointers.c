// pointer stores the address of another variable
// can be of int,float,char type  
// int* ,char* ,float*  are respective pointers of data type
// int a=5          a is integer variable with address=a45as
// *b=a45as         b points to a (meaning b stores the address of int a)
//                  b will have its own address=32adb
// *c=32adb         c is pointer to another pointer (mean c is a pointer which stores
//                    address of another pointer)


// & and * are both operators
// & is known as address of a variable
// * is known as dereference operator,indirectional operator
// &a      here & is giving address of variable a (not value itself)
// so if b=&a    then b will have the address of a (not the actual value itself)
// *b=&a   here * will give the actual value which is stored on &a(address of a)



#include<stdio.h>

int main(){

    int a=5;
    int b=a;
    int c= &a;
    int* d= &a;
    int* e=a;
     

    printf("%d\n",a);
    // value of a is printed here which is normal
    // output=5
    printf("%d\n",&a);
    // Here address of a is printed here due to use of &
    // output=6422284
    printf("%d\n",b);
    // Here value of b is same as of a which is 5. normal
    // output=5
    printf("%d\n",c);
    // Here c is a variable which stores the address of a.
    // output=6422284
    printf("%d\n",d);
    // Still d is printing address of a, notice only d is in print statement not star
    // output=6422284
    printf("%d\n",*d);
    // Here by using star(deference), we get the value of a
    // output=5
    printf("%d\n",e);
    // Here we are not using & so address will not be taken, so simply e=a.
    // output=5
    printf("below line will not give result\n");
    printf("%d\n",*e);
    // since we are not taking address by &, no address is there in int* e.
    // In this print statement we are printing value (deferencing something) which doesn't exist.
    printf("hi");


    return 0;
}