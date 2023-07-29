#include <stdio.h>
#include <stdlib.h>

int solution(int number){
    int c = 0;
    for (int i = 0; i <= number-1; i++) if(i % 3 == 0 || i % 5 == 0) c += i;
    return c;
}


int main(){
    printf("\n %d \n",solution(30));
    return 0;
}
