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