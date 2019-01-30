#include "max_product.h"
#define SWAP(a,b) {int temp; temp=a; a=b; b=temp;}
int max_pairwise_product_fast(int *arr, int size){
        int index = 0;
        for ( int i = 1; i < size; i ++){
                if (arr[index] < arr[i]){
                        index = i;
                }
        }
        SWAP(arr[index], arr[size - 1]);
        index = 0;
        for (int j = 1; j < size - 1; j ++){
                if (arr[index] < arr[j]){
                        index = j;
                }
        }
        SWAP(arr[index], arr[size - 2]);

        return arr[size - 1] * arr[size - 2];
}
