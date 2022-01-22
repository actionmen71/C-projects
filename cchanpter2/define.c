#include<stdio.h>
#include"fileq.c"
// we have included above file 
// in above file there is no main method because we are including the file in this current program
// two main method will create conflict
// so we have to change the main method of above file to another one
// now fileq.c will not run on itself 
// but we can use all the functions defined in that file 


#define PI 3.45//global variable defined here (one way to use define directive)
// this preprocessor global variable can't be changed by any function only be used
int a=5;
// this is global variable and can be changed by any function or method


#define S(x) x+x
// these are macros(one line function) and can be used anywhere in the program


int main(){
    int f,g;
    f=3;
    g=2;
    int h=returnv(); //this function is in fileq.c
    printf("%d\n",h);
    int k=funadd(g,f);//this function is in fileq.c
    printf("%d\n",k);
    printf("%f\n",PI); // we can print preprocessor global variable but can't changed it
     

    printf("%d\n",a);
    a=3;
    printf("%d\n",a);//just changed and printed global variable

    int bb=5;
    int bc=S(bb);//just used macro here like a normal function
    printf("%d",bc);

     
    return 0;
}

