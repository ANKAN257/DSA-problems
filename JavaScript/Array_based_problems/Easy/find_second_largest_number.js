const readline = require('readline')

function find_second_largest_number(arr){
    
    // arr.sort();
    // console.log(arr[arr.length - 2]);

if(arr.length<2)console.log("not sufficient data hai ");

let first=-Infinity
let second=-Infinity;
let firstMin=Infinity
let secondMin=Infinity;

for(let i=0;i<arr.length;i++){
    first=Math.max(first,arr[i]);
    firstMin=Math.min(firstMin,arr[i]);
}

for(let i=0;i<arr.length;i++){
    if(arr[i]<first&&arr[i]>second){
        second=arr[i];
    }

  if(arr[i]>firstMin&&arr[i]<secondMin){
      secondMin=arr[i];
  }


}


console.log(second);
console.log(secondMin);
  



}



function main(){

    const rl=readline.createInterface({
        input:process.stdin,
        output:process.stdout
    })
    rl.question("Enter the element of array ",(input)=>{
        const arr=input.split(/[,\s]+/).map(Number)
        console.log(arr);
        find_second_largest_number(arr);
        rl.close()
    })


}

main()