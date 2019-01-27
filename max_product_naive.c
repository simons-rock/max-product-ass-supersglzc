#include "max_product.h"
#define max(a,b) (a>b?a:b)

int max_pairwise_product_naive(int * arr, int size){
        int product = 0;
        for (int i = 0; i < size; i ++){
                for (int j = i + 1; j < size; j ++){
                        product = max(product, arr[i] * arr[j]);
                }
        }
        return product;
}
