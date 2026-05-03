#include <stdio.h>
int linear_search(int tab[],int taille, int target){
    for(int i=0; i< taille; i++){
        if(tab[i] == target){
            printf("element trouve %d\n", tab[i]);
            return i;
        }
    }
    return -1;
}
int main(){
    int test[]={20,44,56,7,5,64,72,154};
    int cible = 72;
    int size = sizeof(test)/sizeof(test[0]);
    int resulat = linear_search(test,size,cible);
    if(resulat != -1){
        printf("index de l'element trouve %d\n", resulat);
    }
    else{
        printf("aucun element trouve");
    }
    return 0;
}