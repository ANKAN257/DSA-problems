

const readline = require('readline')


function InsertionSort(arr){

    for(let i=0; i<arr.length; i++){
        let currEle=arr[i];
        let j=i-1;
        while( j>=0&&currEle<arr[j]){        
               arr[j+1]=arr[j]
               j--;
        }
        arr[j+1]=currEle;
    }

    console.log(arr);

}

function main(){
  const rl=readline.createInterface({
    input:process.stdin,
    output:process.stdout
  })
  rl.question("enter the element of array  :  ",(input) => {
    const arr=input.split(/[,\s]+/).map(Number)
    console.log(arr);
    InsertionSort(arr);
    rl.close();   
  })


}
main();