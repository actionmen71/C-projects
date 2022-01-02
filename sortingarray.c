#include<stdio.h>

int main(){
    // Here we will sort 1D array 
    int temp;
    int rawarr[10]={10,9,8,7,6,5,4,3,2,1};

    // Sortng Loop proposition 1
    // This loop works on small data but it will not work in extreme cases
    // like here
    // for (int i=0;i<8;i++){
    //     if(rawarr[i]>rawarr[i+1]){
    //         temp=rawarr[i];
    //         rawarr[i]=rawarr[i+1];
    //         rawarr[i+1]=temp;
            
    //     }

    // }


    // This sorting loop is based on bubble sort 
    // It will worl in extreme cases also
    
    for(int i=0;i<10;i++){
        for (int j=i+1;j<10;j++){
            if(rawarr[j]<rawarr[i]){
                temp=rawarr[i];
                rawarr[i]=rawarr[j];
                rawarr[j]=temp;
            }
        }
    }








    // Print loop
    printf("sorted array\n");
    for (int i=0;i<10;i++){
        printf("%d",rawarr[i]);
    }


}