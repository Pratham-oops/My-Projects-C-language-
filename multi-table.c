#include <stdio.h>
#include<cs50.h>

int main()
 {
    int num= get_int ("Enter the number whose multi-table is required: ");
    for(int i=1; i<11; i++){

        printf(" %d  *  %d  = %d\n", num , i, num*i);
    }
}