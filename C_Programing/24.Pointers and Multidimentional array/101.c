/* 3D array

int C[3][2][2] --> 3 x 2D array of size 2 x 2 integers
int (*p)[2][2] = C --> pointer to 2D array of size 2 x 2 integers

print C --> pointer to first 2D array = 800 for ex. 
    --> int (*)[2][2]
    --> pointer to 2D array of 2 x 1D array

print *C or C[0] or &C[0][0] --> pointer to -->
    --> Address of 1st 1D array in 1st 2D array 
    --> int(*)[2] 
    --> Derefrencing 3D array gives pointer to first 1D array of integers of size 2


*/