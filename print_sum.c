#include <studio.h>
extern int sum (int *array, int count)


int main(){
    int arr[60];
    int i, sum;
    File *numbers;

    numbers = fopen("data.txt", "r");
    fscanf(numbers, "%d", &count);

    for(i=0; i< count; i++){
        fscanf(file, "%d", arr[i]);
    }

    s = Scan(array,count);
    printf("%d", sum);
    fclose(numbers);
    return 0;
}