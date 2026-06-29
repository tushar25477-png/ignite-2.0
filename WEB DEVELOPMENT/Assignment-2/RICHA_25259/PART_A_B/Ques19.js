function greet(arr){
    let newarr=[];
    for(let i in arr){
        newarr[i]=`Hello, ${arr[i]}!`;
    }
    return newarr;
}
console.log(greet(["Richa","Sam","Ruth"]));