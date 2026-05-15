/*
L'objectif : Modifie ton Linear Search. Si l'algorithme trouve l'élément recherché,
 il doit échanger cet 
élément avec celui situé à l'index 0 du tableau.Logique : Lors de la prochaine 
recherche de ce même élément, la complexité tombera à O(1).
*/

#include <stdio.h>
int linear_search(int tab[],int size, int target){
    int temp;
    for(int i=0; i< size; i++){
        
        if(tab[i] == target){
            printf("element trouve %d\n", tab[i]);
            if(i >0){
                temp = tab[0];
                tab[0] = target;
                 tab[i] = temp;
            }
            return i;
        }
        
    }
    return -1;
}
int main(){
    int test[]={20,44,56,7,5,64,72,55,1445,15455,66,23,544,64,244,63,66,92,44,244,25,};
    int target = 72;
    int size = sizeof(test)/sizeof(test[0]);
int result1 = linear_search(test, size, target);
printf("First search index: %d\n", result1); 

int result2 = linear_search(test, size, target);
printf("Second search index: %d\n", result2);
    if(result1 != -1){
        printf("index de l'element trouve %d\n", result1);
    }
    else{
        printf("aucun element trouve");
    }

 printf("Second search index: %d\n", result2);
    if(result2 != -1){
        printf("index de l'element trouve %d\n", result2);
    }
    else{
        printf("aucun element trouve");
    } 
    return 0;
}