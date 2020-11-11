#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <fcntl.h>
/*Вывести все элементы массива, удовлетворяющие выражению 3k+1, где k – целое.*/
void func1(int *ar,int size);

int main (){
    int l;
    printf("Write size of arr");
     scanf ("%i",&l);
    int *arr1 = (int*)malloc(sizeof(int) * l);

    srand(time(NULL));

      func1(arr1 , l);
    free(arr1);
    return 0;
}
void func1(int *ar,int size){
      int k;
      int i;
    for(i=0; i< size; i++){
        ar[i]=1+rand()%30;
          printf("%i \t",ar[i]);
    }
    printf("\nVvedite k\n");

    scanf ("%i",&k);
    for (i = 0 ; i < size;i++ ){
        if ( ar[i] == 3*k + 1 ){
            printf("%i \t", ar[i]);
        }
    }
 /////laba2ë
}
