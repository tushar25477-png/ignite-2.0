const numbers=[1,2,3,4,5,6,7,8,9,10];
numbers.push(11);
numbers.shift(numbers[0]);
console.log(numbers);
const newarr=numbers.filter(n=>n%2==0);
console.log(newarr);
const double_arr=numbers.map(n=>n*2);
console.log(double_arr);