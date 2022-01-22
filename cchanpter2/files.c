// here we will be working with files
// All function related to file handling are in library(stdio.h) which we have already used up till now
// everytime we have to work with files we have to create a file pointer




// IMPORTANT!!!
// after opening a file here or in any program we must close it via fclose()
// 

#include<stdio.h>
 



int main(){
    FILE*fl=NULL; // we have created file pointer and initiated NULL to avoid garbage value
    fl=fopen("test.txt","r"); // r is the mode in which we are opening and saving in variable pointer fl
    

    
    return 0;
}
