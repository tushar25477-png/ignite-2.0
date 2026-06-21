const marks=[45, 67, 23, 89, 12, 95, 56];
let max=marks[0];
let sum=0;
let c=0;
let min=marks[0];
for( let i in marks){
    sum+=marks[i];
    if(marks[i]>max){
        max=marks[i];
    }
    if(marks[i]<min){
        min=marks[i];
    }
    if(marks[i]>50){
        c++;
    }
}
console.log("maximum marks is: ", max, "and minimum marks is: ", min);
let avg=sum/7;
console.log("Average is: ", avg);
console.log("Number of students who scored above 50 is: ",c);
