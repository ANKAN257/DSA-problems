const readline = require('readline');

// remove_duplicate_sortedArray
function remove_duplicate_sortedArray(arr){

}


(function main() {
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });
  let t=3;
  function askQuestion() {
    if (t > 0) {
        rl.question("Enter the elements of the array separated by spaces: ", (input) => {
            const arr = input.split(/[,\s]+/).map(Number);
            console.log("Original array:", arr);
            const uniqueArray = remove_duplicate_sortedArray(arr);
            console.log("Array without duplicates:", uniqueArray);
            
            t--;
            askQuestion();  // Recursively call to prompt again
        });
    } else {
        rl.close();  // Close the readline interface after all prompts
    }
}

askQuestion();

})();
