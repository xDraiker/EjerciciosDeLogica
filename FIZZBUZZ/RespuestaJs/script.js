FIZZBUZZ(100);

function FIZZBUZZ(n){
    for(let i=1;i<=n;i++){
        let fiz=i%3===0;
        let buz=i%5===0;
        if(fiz && buz){
            console.log("FIZZBUZZ");
        }else if(fiz){
            console.log("FIZZ");
        }else if(buz){
            console.log("BUZZ");
        }else{
            console.log(i);
        }
    }
}