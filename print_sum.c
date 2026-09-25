#include <stdio.h>
extern int Summation(int *array, int count);


int main(){
    int arr[60];
    int i, sum, s, count;
    FILE *numbers;

    numbers = fopen("data.txt", "r");
    fscanf(numbers, "%d", &count);

    for(i=0; i< count; i++){
        fscanf(numbers, "%d", &arr[i]);
    }

    s = Summation(arr,count);

    printf("%d", s);
    fclose(numbers);
    return 0;
}