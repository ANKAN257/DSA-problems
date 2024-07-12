
const readline = require('readline');


function selectionSort(arr){
    let n=arr.length;
    for(let i=0; i<n-1; i++){
        let minIdx=i;
        for(let j=i+1; j<n; j++){//ye loop help in find the min ele ,second min ele,3rd min ele so on
           if(arr[minIdx]>arr[j]){
            minIdx=j;
           }
    }
   //12 3 2 4
   if(minIdx!=i){
        let temp = arr[i];
         arr[i] = arr[minIdx];
         arr[minIdx] = temp;
   }
   
        
    // (12,3) ,(12,2) ,(3,2)
      //3 12 2 4
      //3 2 12 4
      //2 3 12 4
}
let output=""
for(let i=0; i<arr.length; i++){
    //  console.log(arr[i]+" ");//each element in differnct line
     output+=arr[i]+" ";

}
console.log(output.trim());
console.log(arr);


}

function main(){
const rl=readline.createInterface({
      input:process.stdin,
      output:process.stdout
});

rl.question("enter number  ",(input)=>{
    const n1=parseInt(input,10);
   
       rl.question("Enter the elements of array ",(input)=>{
          const arr=input.split(/[,\s]+/).map(Number)//split the input string  and convert into array number
          console.log("Array Element Number ",arr);
      
          selectionSort(arr);
     

          rl.close();
        })
       
})




}

main();