export function trouverIndexPlat(idsTries: number[], idCible: number):number {
    let gau = 0;
    let dr = idsTries.length-1;
    while(gau <= dr){
    const mid = Math.floor((gau+dr)/2);
    if (idsTries[mid] === idCible) return mid;
    idsTries[mid] < idCible? gau = mid+1:dr = mid-1;
    }
    return -1;
}