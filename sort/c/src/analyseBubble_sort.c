#include <stdio.h>
#include <stdbool.h>
int bubble_sort(int tab[],int size){
    int comparateur=0,echangeur = 0;
    for(int i=0; i<size-1;i++){
        bool swapped = false;
      int temp;
       for(int j=0; j< size-i-1;j++){
        comparateur++;
        if (tab[j]>tab[j+1]){
            echangeur++;
            temp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = temp;
            swapped = true;
        }
       } 

       if(!swapped){
        break;
       }
    }
    printf("%d\n comparaions ", comparateur); 
     printf("%d\n echanges", echangeur);
}
int main(){
    int cas_A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //9fois
    int cas_B[]= {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; // 45, swapp inutile
    int cas_C[] = {3, 5, 1, 9, 4, 2, 8, 6, 0, 7};
    int size_A = sizeof(cas_A)/sizeof(cas_A[0]);
    int size_B = sizeof(cas_B)/sizeof(cas_B[0]);
    int size_C = sizeof(cas_C)/sizeof(cas_C[0]);
   bubble_sort(cas_A,size_A);
   for (int i = 0; i < size_A; i++)
   {
    printf("%d\n ", cas_A[i]);
   };
//
   bubble_sort(cas_B,size_B);
   for (int i = 0; i < size_B; i++)
   {
    printf("%d\n ", cas_B[i]);
   };

   //
   bubble_sort(cas_C,size_C);
   for (int i = 0; i < size_C; i++)
   {
    printf("%d\n ", cas_C[i]);
   }
   
    return 0;
}

/*
 pour le cas A on aura 9 passages car deja trie et fait i-1= 10-1;
 pour le cas B le flag swapped est inutile du fait qu'on va echanger jusqu'a la fin et 45  comparaison 45
*/