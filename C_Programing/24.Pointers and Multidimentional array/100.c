/* 2D array

int B[2][3] --> 2 x 1D arrays of 3 integers

B[0] --> 1-D arrays of 3 integers 
B[1] --> 1-D arrays of 3 integers 

int *p = B; (X) compile error! because (B) will return a pointer to 1-D array of 3 integers , not pointer to integer
int (*p)[3] = B; (OK) will return a pointer to 1-D array of 3 integers

print B or &B[0] --> Address of (pointer to) first 1-D array = 400
print *B or B[0] or &B[0][0] --> returning integer pointer --> Address of 1st element in the 1st array = 400
print B+1 or &B[1] --> Address of second 1-D array = 400 + 12 = 412
print *(B+1) or B[1] or &B[1][0] --> returning integer pointer --> Address of 1st element in the 2nd array = 412
print *(B+1)+2 or B[1]+2 or &B[1][2] --> 412 + 8 = 420
print *(*B+1) --> derefrence 2nd element in 1st array, ex = 3

B[i][j] = *(B[i] + j) = *(*(B + i) + j)
B[i] = *(B+i)

*/