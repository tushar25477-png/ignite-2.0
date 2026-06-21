function NumberProperty(n){
    
    if(n<0){
        console.log("Negative");
    }
    else if(n>0){
        console.log("Positive");
    }
    else{
        console.log("Zero");
    }

    if(n%2==0){
        console.log("Even");
    }else{
        console.log("Odd");
    }
let flag=true;
    if(n==1){
        console.log("Not prime");
        flag=false;
    }
    if(flag){
    for(let i=2;i<=n/2;i++){
        if(n%i==0){
            console.log("Not prime");
            flag=false;
            break;
        }
    }}
    if(flag){
        console.log("Prime");
    }
}

NumberProperty(4);