function calculateBill(amount, discount=10){
     let finalPrice=amount-(amount*discount)/100;
    return(finalPrice.toFixed(2));
}
console.log(calculateBill(100));