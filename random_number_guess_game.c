#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, n, nguesses=1;
    srand(time(0));
    num=rand()%100+1;
    do{
        printf("enter a number between 1-100\n");
        scanf("%d", &n);
        if(num>n){
            printf("higher number plz!\n");
            }

            else if(num<n){
                printf("lower rnumber plz!\n");
            }
            else{
                printf("you guessed it right in %d attempts\n", nguesses);
                }
                nguesses++;
    }
                while(n!=num);
             return 0;
}
