#include <cs50.h>
#include <stdio.h>

int main(){
    int i,j;
    int h = get_int("h : ");
     for(i=0;i<=h;i++){
        for(j=0;j<i+1;j++){
            printf("*");

        }
        printf("\n");
     }

}