#include <stdio.h>


int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void max_min(int *max, int *min) {
    int i;
    *min = *max = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] < *min) {
            *min = vetor[i];
        }
    }
    for(i=1; i<10; i++){
        if(vetor[i] > *max){
            *max = vetor[i];
            printf("O valor de MAX é %d\n",max);
        }
    }

}

int main() {
    int x = 10;

    int *ptr;

    ptr = &x;

    int y = *ptr;

    printf("X = %d, PTR = %d e por fim, Y= %d", x, ptr, y);


    int max, min;

    max_min(&max, &min);



  int n = 10;

  int * pointer_to_n = &n;

  *pointer_to_n += 1;

  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");

    return 0;
}
