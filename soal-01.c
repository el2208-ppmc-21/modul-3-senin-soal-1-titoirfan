#include "stdio.h"
#define MAX_SIZE 100

void askSize(int *size); // Untuk menentukan ukuran matrix
void getMatrix(int size, int mat[size][size]); // input matriks
void printMatrix(int size, int mat[size][size]); // printing matriks
void inputDegree(int *degree); // memasukkan derajat perputaran matriks
void rotateMatrix(int size, int mat[size][size], int degree); // memutar matriks

int main(){
    int i, j;
    int size;
    int degree;

    askSize(&size);
    int mat[size][size];
    
    getMatrix(size, mat);
    inputDegree(&degree);
    rotateMatrix(size, mat, degree);
    printMatrix(size, mat);
    return 1;
}


void askSize(int *size){
    printf("Masukkan ukuran: ");
    scanf("%d", size);
}

void getMatrix(int size, int mat[size][size]){
    printf("Masukkan matrix:\n");
    int i,j;
    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++){
            scanf("%d", &(mat[i][j]));
        }
    }
}

void printMatrix(int size, int mat[size][size]){
    int i,j;
    for (i = 0; i < size; i++){
        for (j = 0; j < size; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void inputDegree(int *degree){
    printf("Masukkan sudut rotasi: ");
    scanf("%d", degree);
}

void rotate90Clock(int size, int mat[size][size]){
    int i, j;
    for (i = 0; i < size/2; i++){
        for (j = i; j < size - i - 1; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[size - 1 -j][i];
            mat[size - 1 -j][i] = mat[size - 1 - i][size - 1 - j];
            mat[size - 1 - i][size - 1 - j] = mat[j][size - 1 - i];
            mat[j][size - 1 - i] = temp;
        }
    }
}

void rotateMatrix(int size, int mat[size][size], int degree){
    int degree_new = degree % 360;
    int times = degree_new / 90 ;
    while (times--){
        rotate90Clock(size,mat);
    }
    
}
