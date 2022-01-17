// unions are another userdefined datatype just like structures
// In structures
// struct student1{
//     int roll;
//     char name[];
// };
// here both members of the structure will take its own memory
// int=4, char=1   total memory taken by structure is 5
// even if we don't use one of the members still it will take all the memory

// IN UNIONS
// union student1{
//       int roll;
//     char name[];
// };
// here the total memory of the union = highest memory consuming member's memory
// unlike structures where all the members memory are counted
// here we only take memory of largest datatype member



#include<stdio.h>


struct student1{
    int roll;
    char name[];
};

union student2{
    int roll;
    char name[];
};


int main(){
    
    return 0;
}