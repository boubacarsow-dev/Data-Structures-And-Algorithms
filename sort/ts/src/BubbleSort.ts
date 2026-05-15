export function bubble_sort(tab:number[]):number[]{
    let swapped ;
  for(let i=0; i<tab.length; i++){
    swapped = false;
    let temp;
    for(let j=0; j<tab.length-i-1;j++){
        if(tab[j] > tab[j+1]){
            temp = tab[j];
            tab[j]= tab[j+1];
            tab[j+1] = temp;
            swapped = true;
        }
    }
    if(!swapped){
        break;
    }
  }
  return tab;
}