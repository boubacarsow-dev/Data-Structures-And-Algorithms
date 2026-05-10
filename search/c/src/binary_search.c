#include <stdio.h>
int binary_search(int tab[], int size,int target){
    int left = 0;
    int right = size-1;
    while(left <= right){
        int mid = ((left + right)/2);
        if(tab[mid] == target){
        return mid;
        }
    if(tab[mid] < target){
        left = mid+1;
    }
    else{
        right = mid-1;
    }
}
 return -1;
}
int main(){
     int test[]={3, 15, 28, 42, 56, 71, 89, 94};
    int target = 71;
    int size = sizeof(test)/sizeof(test[0]);
   int resultat = binary_search(test,size,target);

    //
    if(resultat != -1){
        printf("index de l'element trouve %d\n", resultat);
    }
    else{
        printf("aucun element trouve");
    }
    return 0;
}