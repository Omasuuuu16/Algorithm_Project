#include <stdio.h>

int isTriangle(int A[], int n){
    for(int i = 1; i < n; i++){
        int key = A[i];
        int j = i - 1;
        while(j >= 0 && A[j] > key){
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
    for(int i = 0; i < n - 2; i++){
        if(A[i] > 0 && A[i] + A[i + 1] > A[i + 2]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int A[] = {10, 2, 5, 1, 8, 20};
    int n = sizeof(A) / sizeof(A[0]);
    if(isTriangle(A, n)){
        return 1;
    } else {
        return 0;
    }
    return 0;
}