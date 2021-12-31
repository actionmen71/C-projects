//  These are the format specifiers used to specify the format or datatype that we have used or will be using
//  %d(integer) %c(character) %f(float) %l(long) %lf(double) %LF(long double)
//  %c rather than denoting a letter it denotes the size whether it be a integer number of letter
// In this program we have seen various scenarios regarding format specifier of char 

#include<stdio.h>

int main(){
    char a=8.6;  //accepted as value
    // (%c) print nothing,(%d) only 8 print, (%f) only 0.0000 means error
    char b=10;  //accepted as value
    char c=100;  // accepted as value
    // Above all the sentences are just numbers so (%c) will print nothing just blank, so to access them and print (%d) will be needed
    // (%f) will just print 0 because float data type is too big size for char to accept and print
    // So in case of integers, small numbers are acceptable as char but not large one
    char f=890374;
    // (%d) some conversion and random value in print,(%c) some random symbol in print,(%f) 0.000000 means error
    char d='3'; 
    //  Above d in now a literal not integer, so it will print 3 (%c) and 51(%d)(ASCII value)
    char e='1004'; // only the last letter will be printed without any error
    char g='aberw'; // only the last letter will be printed without any error 
    // Above two sentence are treated as multicharacter error as they have more than one character and large values but the program will run
    char i='a';  //absolutely perfect char
     
    printf("%c \n",i);
    printf("%c \n",a);
    printf("%d \n",d);
    printf("%f \n",b);
    printf("%f \n",f);
    
     
    
    printf("This sentence doesn't have any variable so no format accessifier needed");
    printf("\nNormal print statements are printed just like this\n");
    

    int ab=32;
    float ac=32.23;
    printf("The value of ab is %d and value of ac is %f",ab,ac);
    printf("\nThe value of ab is %4d and value of ac is %4f",ab,ac);
    printf("\nThe value of ab is %4.8d and value of ac is %4.8f",ab,ac);
    
    return 0;
}





/* In C and in C++ single quotes identify a single character, while double quotes create a string literal. 'a' is a single a character 
literal, while "a" is a string literal containing an 'a' and a null terminator (that is a 2 char array).

In C++ the type of a character literal is char, but note that in C, the type of a character literal is int, that is sizeof 'a'
 is 4 in an architecture where ints are 32bit (and CHAR_BIT is 8), while sizeof(char) is 1 everywhere.

eg: char h="a";  will be read as 'a(and a null char)'
    It will show error "warning: initialization of 'char' from 'char *' makes integer from pointer without a cast [-Wint-conversio] "

*/