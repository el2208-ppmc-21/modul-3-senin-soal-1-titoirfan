/** EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*   Modul               : 
*   Soal                : 1
*   Hari dan Tanggal    : 
*   Nama (NIM)          : 
*   Asisten (NIM)       : 
*   Nama File           : soal-01.c
*   Deskripsi           : Deskripsi file ini.
*/

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
    
    // Format print untuk membantu autograding
    // printf("%d ", mat[i][j]);
    
    return 1;
}
