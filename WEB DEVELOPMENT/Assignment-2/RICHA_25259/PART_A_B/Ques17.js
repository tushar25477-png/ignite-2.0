function Calculator(num1, num2, operator){
    switch(operator){
        case '+':
            return num1+num2;
            break;
        case '-':
            return num1-num2 ;
            break;  
        case '*':
            return num1*num2 ;
            break;  
        case '/':
            if(num2===0){
                console.log("division by 0");
                return;
            }
            return num1/num2 ;
            break;           
    }
} 
console.log(Calculator(2,0,'/'))