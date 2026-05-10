import { binary_search } from "../src/BinarySearch";

const sortedData = [3, 15, 28, 42, 56, 71, 89, 94];
const target = 71;

const resultIndex = binary_search(sortedData, target);

console.log(`La cible ${target} a été trouvée à l'index : ${resultIndex}`);