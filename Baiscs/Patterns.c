#include<stdio.h>

int main(){
    for(int i=0; i<6; i++){
        for(int j=i;j<6;j++){
            printf("*");
        }
        printf("\n");
    }
}