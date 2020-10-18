#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define COL 5
#define MAX 8

int main(void) {

    int arr2d[MAX][COL] = { { 0 } },  
        * arr[MAX] = { NULL },       
        i, j, v = 0;

    for (i = 0; i < MAX; i++) {     
        for (j = 0; j < COL; j++)
            arr2d[i][j] = v++;
        arr[i] = arr2d[i];          
    }

    for (i = 0; i < MAX; i++) {    
        for (j = 0; j < COL; j++)   
            printf(" %4d", arr[i][j]);
        putchar('\n');
    }
    return 0;
}