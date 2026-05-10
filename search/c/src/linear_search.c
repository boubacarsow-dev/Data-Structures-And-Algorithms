#include <stdio.h>
int linear_search(int tab[],int size, int target){
    for(int i=0; i< size; i++){
        if(tab[i] == target){
            printf("element trouve %d\n", tab[i]);
            return i;
        }
    }
    return -1;
}
int main(){
    int test[]={20,44,56,7,5,64,72,154};
    int target = 72;
    int size = sizeof(test)/sizeof(test[0]);
    int result = linear_search(test,size,target);
    if(result != -1){
        printf("index de l'element trouve %d\n", result);
    }
    else{
        printf("aucun element trouve");
    }
    return 0;
}