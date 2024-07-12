

const readline = require('readline');
function findGcd(n1,n2){
   
    let gcd=1;
    for(let i=1;i<=Math.min(n1,n2);i++){
        
        if(n1%i==0&&n2%i==0){
            gcd=i;
        }

    }

    return gcd;

} 

function findGcd_optimal(n1,n2){
    while(n1>0&&n2>0){
         if(n1>n2){
            n1=n1%n2;
         }else {

            n2=n2%n1;
         }
    }

    if(n1===0)return n2;
    
    return n1;
}

function main(){
   
    const rl = readline.createInterface({
        input: process.stdin,
        output: process.stdout
    });

    rl.question('Enter the first number: ', (input1) => {
        const n1 = parseInt(input1, 10);

        rl.question('Enter the second number: ', (input2) => {
            const n2 = parseInt(input2, 10);

            // const gcd = findGcd(n1, n2);
            const gcd_optimal = findGcd_optimal(n1, n2);

            console.log("GCD of " + n1 + " and " + n2 + " is: " + gcd_optimal);

            rl.close();
        });



    });

//   let n1,n2;
//     rl.question("enter the first Number: ", (input1) => {  //asyn fun so wait for time
//          n1=parseInt(input1, 10);
//     })

//     rl.question("Enter the second Number: ",(input)=>{//asyn  fun so wait for time
//          n2=parseInt(input,10);
//     })
//     const gcd = findGcd(n1, n2);  //it run before abouve fun 
//     console.log("GCD of " + n1 + " and " + n2 + " is: " + gcd);
//     //  rl.close();

}

main();