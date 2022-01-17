// first of all to use string we have to add another library called <string.h>
// this library has all the string functions
// by default there is no string data type in c but with the help of array we create string array
// string array can be of any size but it is terminated with null character at the end otherwise it will not 
// be taken as string as string function will not work

// %s is format specifier for string


// there are two ways to create string 
// 1 either as single character string(we have to specify null character manually here) 
// 2 using double quotes where we don't have to specify null characer ourselves

#include<stdio.h>
#include<string.h>
// this library for string functions



int main(){
    // first way
    int id=32;
    char name[]="my name is krishan\n";
    printf("%s",name);
    char student[45]={'k','r','i','s','h','n','a'};//null character necessary here
    // output:krishna
    // without null it will still run without error but string functions will not work
    printf("%s\n",student);

    puts(student);//only print string
    // puts(id); error;

    
    return 0;
}