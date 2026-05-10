export function binary_search(tab:number[], target:number):number {
    let left = 0;
    let right = tab.length-1;
    while (left <= right) {
        const mid = Math.floor((left+right)/2) ;

        //
        if(tab[mid] === target) return mid;

        tab[mid] < target? left = mid+1:right = mid -1;

    }
    return -1;
};