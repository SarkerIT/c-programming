#include<stdio.h>
int main(){

    int a;
    scanf("%d", &a);
    int result =  (a/1000);
    //printf("%d \n", result);

    if(result%2==0){
        printf("EVEN");       
    }else{
        printf("ODD");
    }
    
    return 0;
}