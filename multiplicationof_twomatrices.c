/*Write a C program that multiplies two matrices, ensuring that the number of columns in
the first matrix is equal to the number of rows in the second matrix. Display the resulting
matrix. Note: Prompt user to enter the size of the matrix.*/

#include <stdio.h>

int main(){
    int m,n,p,q;

    printf("Enter the number or rows and coloumn for matrix 1: ");
    scanf("%d %d", &m,&n);

    printf("Enter the number or rows and coloumns for matrix 2: ");
    scanf("%d %d", &p,&q);

    if(n != p){
        printf("The matrix cannot be multiplied asshole kill yourself");
        return 1;
    }

    int Fmatrix[m][n];
    int Smatrix[p][q];
    int R_matrix[m][q];

    printf("Enter in the elements for the first matrix: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &Fmatrix[i][j]);
        }
    }

    printf("Enter in the elements for the second matrix: \n");
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q; j++){
            scanf("%d", &Smatrix[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            R_matrix[i][j]= 0;
            for(int k = 0; k < n; k++){
                R_matrix[i][j] += Fmatrix[i][k] * Smatrix[k][j];
            }
        }
    }
    
    printf("The resultant matrix isssss: \n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < q; j++){
            printf("%d", R_matrix[i][j]);
        }
    }
}