#include <stdio.h> // Solution2: use return method


int addNumbers(int number1, int number2){
    int result = number1 + number2;
    return result;
}

int main(){
    int sum = addNumbers(8,9);
    printf("Result= %d", sum);

    return 0;
}
