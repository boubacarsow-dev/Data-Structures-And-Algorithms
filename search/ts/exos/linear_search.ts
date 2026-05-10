export function verifierInteraction(logs: number[], idCible: number): boolean {
    for(let i =0; i< logs.length; i++){
            if(logs[i] === idCible){
                return true
    }
}
 return false;
};