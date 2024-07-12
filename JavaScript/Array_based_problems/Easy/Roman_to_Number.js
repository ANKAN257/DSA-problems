const readline = require('readline');


function roman_To_Number(input){
    const roman={
        'I':1,
        'IV':4,
        'V':5,
        'IX':9,
        'X':10,
        'L':50,
        'C':100,
        'D':500,
        'M':1000,
        'IV':4,
        'IX':9,
        'XL':40,
        'XC':90,
        'CD':500,
        'CM':900,


  }

  //
  let num=0;
for(let i=0; i<input.length; i++){
     if(i+1<input.length&&roman[input.substring(i,i+2)]){
          num+=roman[input.substring(i,i+2)];
          i++; //skip the char
     }else {
         num+=roman[input.substring(i,i+1)];
     }

}

return num;

}

function Number_To_Roman(input) {
    const NumMap = [
        { value: 1000, symbol: 'M' },
        { value: 900, symbol: 'CM' },
        { value: 500, symbol: 'D' },
        { value: 400, symbol: 'CD' },
        { value: 100, symbol: 'C' },
        { value: 90, symbol: 'XC' },
        { value: 50, symbol: 'L' },
        { value: 40, symbol: 'XL' },
        { value: 10, symbol: 'X' },
        { value: 9, symbol: 'IX' },
        { value: 5, symbol: 'V' },
        { value: 4, symbol: 'IV' },
        { value: 1, symbol: 'I' }
    ];
    
    let n=input.length;
    let roman=""
    let num=input

    for(const {value, symbol} of NumMap){
         while(num>=value){
            roman+=symbol
            num-=value
         }
    }

return roman

}


(function main(){

    const rl=readline.createInterface({
        input:process.stdin,
        output:process.stdout
    })

    rl.question("Enter the Roman value :",(input)=>{
       const  result=roman_To_Number(input)
       console.log("Number of given Roman output  is here :",result);

       rl.question("Enter the Number to change into Roman ",(input1)=>{
          const num=parseInt(input1,10)
          const result1=Number_To_Roman(num)
          console.log("Roman Output is here :",result1);               

          rl.close();
       })
       

    })


})()