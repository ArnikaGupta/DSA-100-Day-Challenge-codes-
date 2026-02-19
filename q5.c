#include <stdio.h>

int main() {
    int p, q;
    int i = 0, j = 0;

    scanf("%d", &p);
    int A[p];

    for(int k = 0; k < p; k++) {
        scanf("%d", &A[k]);
    }

    scanf("%d", &q);
    int B[q];

    for(int k = 0; k < q; k++) {
        scanf("%d", &B[k]);
    }

 
    while(i < p && j < q) {
        if(A[i] <= B[j]) {
            printf("%d ", A[i]);
            i++;
        } else {
            printf("%d ", B[j]);
            j++;
        }
    }

    while(i < p) {
        printf("%d ", A[i]);
        i++;
    }

    while(j < q) {
        printf("%d ", B[j]);
        j++;
    }

    return 0;
}
