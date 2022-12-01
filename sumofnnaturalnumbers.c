#include<stdio.h>
#include<cs50.h>

int main(){
    int n= get_int("Enter the value of n : ");
//constant time
    float s= n*n+n;
    float sum= s/2;
//linear time
/*
 for(int i =0;i<n;i++){
    sum+=i;
 }
 printf("The sum of n numbers is : %d",sum)

*/




    printf("The sum of %d natural numbers is : %f \n ", n,sum);

}