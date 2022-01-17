// just like basic built in data types like int, float, char
// structure is a complex data type created by user
// structure can contain multiple data types in them and they are used just like any data type

#include<stdio.h>
#include<string.h>

// defining a structure
// two ways to define a structure
// 1 define and then declare separately
// 2 defintion with declaration



// to access members,member name or elements inside the structure we use
// (.) dot memeber or structure member operator

// 1 first defintion
struct student1{
    int roll;
    char name[];
    
};
//  then decalration separately
struct student1 s1,s2;

// 2 definition and declaration clubbed together
struct student2{
    int roll;
    int contact[];

} s3,s4;



int main(){
    // now we will use structures that we have defined outside of main function
    s1.roll=45;
    s2.roll=46;
    s1.name[45]="krishna";
    s2.name[45]="shankar"; 
    // normally in string we don't have to put array size here but in structure member we are required to do it


    
    return 0;
}