#include<stdio.h>
#include<stdlib.h>
int main(){
    int totalNumbers,*number,sum,i,currentSum = 0;

    printf("ENTER THE TOTAL NUMBER OF INPUT : ");
    scanf("%d",&totalNumbers);

    number = (int*) malloc(totalNumbers * sizeof(int));
    getInput(number,totalNumbers);

    sum = (totalNumbers * (totalNumbers + 1)) / 2;
    for(i = 0;i < totalNumbers - 1;i++)
        currentSum += number[i];
    printf("\nMISSING NUMBER : %d",sum - currentSum);

    free(number);
    return 0;
}

void getInput(int *number,int n){
    int value,i = 0;
    while(i < n - 1){
        scanf("%d", &value);
        if(!(value > 0) || (value > n)){
            printf("EACH NUMBER SHOULD BE IN THE RANGE FROM 0 TO %d\n ",n);
            i = 0;
            continue;
        }
        number[i] = value;
        i++;
    }
}
