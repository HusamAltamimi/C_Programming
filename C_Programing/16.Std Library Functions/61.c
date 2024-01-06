#include<stdio.h>
#include<ctype.h>

int main(){

char alpha = 'a';
char upper = toupper(alpha);
char lower = tolower(upper);
printf("%c",upper);
printf("\n%c",lower);

return 0;

}