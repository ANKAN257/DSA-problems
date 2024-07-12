const readline = require('readline');

function ArraySortOrNot(arr) {
    let x = true;
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] < arr[i - 1]) {
            x = false;
            break;
        }
    }
    console.log(x);
}

function ArraySortOrNot_using_recursive(arr, index ) {
    if (index >= arr.length - 1) return true;
    if (arr[index] > arr[index + 1]) return false;
    return ArraySortOrNot_using_recursive(arr, index + 1);
}

(function main() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question("Enter the elements of the array separated by spaces: ", (input) => {
        const arr = input.split(/[,\s]+/).map(Number);
        console.log(arr);
        const isSorted = ArraySortOrNot_using_recursive(arr,0);
        console.log(isSorted ? "sorted hai" : "sort nahi hai");
        rl.close();
    });
})();
