#include <iostream>
#include "GA.h"
int main() {
    freopen("D:\\CLionProjects233\\GA_01bag\\01bag.in", "r", stdin);
    //ans = 26751
    GA Zero_One_Bag;
    scanf("%d %d", &Zero_One_Bag.DNALength, &Zero_One_Bag.MaxWeight);
    for(int i = 0; i < Zero_One_Bag.DNALength; i++){
        scanf("%d %d", &Zero_One_Bag.weight[i], &Zero_One_Bag.value[i]);
    }
    Zero_One_Bag.Iteration();
    return 0;
}