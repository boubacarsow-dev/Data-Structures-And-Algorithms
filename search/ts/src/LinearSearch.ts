function linear_search(tab:number[],target:number):number {
    for (let i = 0; i < tab.length; i++) {
       if(tab[i] === target){
        console.log(`element trouve est ${tab[i]}`);
        return i;
       }
    }
    return -1;
}

// test
let resultat = linear_search([20,19,55,36],2);
console.log(resultat);
