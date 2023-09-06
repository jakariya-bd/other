#include <stdio.h>

int main(void)
{
    int n1,m1, n2,m2, nr, mr;

    n1=2, m1=3;
    n2=3, m2=4;
    nr = n1, mr = m2;

    if( m1 != n2 ){
        printf("Cannot multiply.\nNo. of column of the first matrix and no. of rows of the second matrix must be same.\n");
        return 0;
    }

    int A[2][3], B[3][4], R[2][4];
    int i, j, k;

    // input matA
    printf("Enter matrix of size %dx%d: \n", n1, m1);
    for(i=0; i < n1; ++i){
        for(j=0; j < m1; ++j){
            scanf("%d", &A[i][j] );
        }
    }

    // input matB
    printf("Enter another matrix of size %dx%d: \n", n2, m2);
    for(i=0; i < n2; ++i){
        for(j=0; j < m2; ++j){
            scanf("%d", &B[i][j] );
        }
    }

    // multiply both
    for(i=0; i < nr; ++i){
        for(j=0; j < mr; ++j){
            R[i][j] = 0; // initializing zero
            for(k=0; k < m1; ++k){ // k < n2 is also the same
                R[i][j] += ( A[i][k] * B[k][j] );
            }
        }
    }

    // print result
    for(i=0; i < nr; ++i){
        for(j=0; j < mr; ++j){
            printf("%d ", R[i][j] );
        }
        printf("\n");
    }

    return 0;
}
