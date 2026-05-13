#include <stdio.h>

void merge(int A[], int left, int mid, int right) {

    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];


    for (int i = 0; i < n1; i++) {
        L[i] = A[left + i];
    }


    for (int j = 0; j < n2; j++) {
        R[j] = A[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;


    while (i < n1 && j < n2) {

        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        }
        else {
            A[k] = R[j];
            j++;
        }

        k++;
    }

    while (i < n1) {
        A[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int left, int right) {

    if (left < right) {

        int mid = (left + right) / 2;

        mergeSort(A, left, mid);
        mergeSort(A, mid + 1, right);

        merge(A, left, mid, right);
    }
}

int isTriangleCheck(int A[], int i, int N) {

    if (i >= N - 2)
        return 0;

    if (A[i] + A[i + 1] > A[i + 2])
        return 1;

    return isTriangleCheck(A, i + 1, N);
}

int isTriangle(int A[], int N) {

    mergeSort(A, 0, N - 1);

    return isTriangleCheck(A, 0, N);
}

int main() {

    int N;

    printf("Enter number of elements: ");
    scanf("%d", &N);

    int A[N];

    printf("Enter elements:\n");

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    if (isTriangle(A, N))
        printf("Output: 1 (Triangle exists)\n");
    else
        printf("Output: 0 (No triangle)\n");

    return 0;
}
