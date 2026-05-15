#include <stdio.h>
#include <stdbool.h>
int bubble_sort(int tab[],int size){
    for(int i=0; i<size-1;i++){
        bool swapped = false;
      int temp;
       for(int j=0; j< size-i-1;j++){
        if (tab[j]>tab[j+1]){
            temp = tab[j];
            tab[j] = tab[j+1];
            tab[j+1] = temp;
            swapped = true;
            j--;
        }
       } 
       
            for(int k = size-1; k>=0; k--){
                 if (tab[k]>tab[k-1]){
            temp = tab[k];
            tab[k] = tab[k-1];
            tab[k-1] = temp;
            swapped = true;
        }
            }    
       if(!swapped){
        break;
       }
    }
}
int main(){
    int test[]={23,45,19,8,59};
    int size = sizeof(test)/sizeof(test[0]);
   bubble_sort(test,size);
   for (int i = 0; i < size; i++)
   {
    printf("%d ", test[i]);
   }
   
    return 0;
}