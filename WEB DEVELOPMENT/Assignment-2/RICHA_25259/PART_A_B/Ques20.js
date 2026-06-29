function findSecondLargest(arr){
    let max1=0, max2=0;
    for(let i in arr){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
    }
    return max2;
}
console.log(findSecondLargest([22,4 ,55 ,55,89]));
//huge blunder in your solution, you are not updating max2 correctly
//here is the correct one
function findSecondLargest(arr) {
    let max1 = -Infinity;
    let max2 = -Infinity;

    for (let num of arr) {
        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2 && num !== max1) {
            max2 = num;
        }
    }

    return max2 === -Infinity ? null : max2;
}
