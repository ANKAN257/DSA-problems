
const readline = require('readline')

function bubbleSort(arr,n){ //compare the adjacent elements

    for(let i=0;i<arr.length-1;i++){

        for(let j=0;j<n-i-1;j++){
            //swap if curr is greater the next ele
            if(arr[j]>arr[j+1]){
                let temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
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
 })
 rl.question("Enter the size of array ",(input)=>{
    const n=parseInt(input,10)
    rl.question("Enter the element of array ",(input1)=>{
        const arr=input1.split(/[,\s]+/).map(Number);
        console.log("array size ",arr);

     bubbleSort(arr,n);

        rl.close()
    })
 })


}
main();