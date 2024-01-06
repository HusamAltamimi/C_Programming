#include <stdio.h>
int average(int marks[]);

int main(){
    float Avg;
    int marks[5];
    printf("Enter students 5 subjects marks: ");
    for (int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }
    Avg = average(marks);
    printf("Student Average is: %0.2f", Avg);

    return 0;
}

int average(int marks[]) {
    float total = 0;
    for (int i = 0; i < 5; i++){
        total = total + marks[i];
    }
    return total/5;
}

