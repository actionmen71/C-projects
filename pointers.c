// pointer stores the address of another variable
// can be of int,float,char type  
// int* ,char* ,float*  are respective pointers of data type

// int a=5          a is integer variable which stores 5 in address=a45as

// b=a              here b is storing value of a
//                  but address(&) of b is different from & of a.

// b=&a             Now the b variable is storing address of a
//                  essentially b=a45as which is address of a.


// int* b=&a        b points to a (b stores address of a but int* will give value of a) 
//                  essentially int* deferecing the adress stored in b to the value
//                  int* b=&a --> int* b=a45as --> int* (a45as) -->5 final 
//                  Notice that b will have its own address=32adb


// int* c=&b         c is pointer to another pointer (means c is a pointer which stores
//                    address of another pointer)
//                   int* c=&b=&a=a45as=5 -->int* c=32adb=a45as=5 -->int*(32adb->a45as)
//                     -->5


// & and * are both operators
// & is known as address of a variable
// * is known as dereference operator,indirectional operator
// &a      here & is giving address of variable a (not value itself)
// so if b=&a    then b will have the address of a (not the actual value itself)
// int* b=&a   here * will give the actual value which is stored on &a(address of a)

// format specifier
// Actual address of memory looks like 0061FF10 i.e numbers and digits
// %d in print statement converts this actual address into a number which is not accurate
// To print the actual address of variable we %p.




#include<stdio.h>

int main(){

    int a=5;
    int b=a;
    int c= &a;
    int* d= &a;
    int* e=a;
     

    printf("The value of integer a is:%d\n",a);
    // value of a is printed here which is normal
    // output=5
    printf("The value of &a or address of a is:%p\n",&a);
    // Here address of a is printed here due to use of &
    // output=6422284
    printf("The value of b=a is:%d\n",b);
    // Here value of b is same as of a which is 5. normal
    // output=5
    printf("The value of &b  when b=a is:%p\n",&b);
    // Here address of b is different than of a
    // It means that when  we copy a variable we only copy value and not the address
    printf("The value of c when c is storing address of a i.e c=&a: %p\n",c);
    // Here c is a variable which stores the address of a.
    // output=6422284
    printf("Now here d is a proper pointer but we are printing only d which stores address of a:%p\n",d);
    // Still d is printing address of a, notice only d is in print statement not star
    // output=6422284
    printf("Now here d is a proper pointer and we are printing *d so it will give the value of a:%d\n",*d);
    // Here by using star(deference), we get the value of a
    // output=5
    printf("Although we are using pointer but without &a, e will just store value of a:%d\n",e);
    // Here we are not using & so address will not be taken, so simply e=a.
    // output=5
    printf("below line will not give result \n");
    printf("%d\n",*e);
    // since we are not taking address by &, no address is there in int* e.
    // In this print statement we are printing value (deferencing something) which doesn't exist.
    printf("hi");


    return 0;
}




// USES OF POINTERS
// linked lists, circular linked lists
// Dynamic memory allocation
// Arrays, function and structures