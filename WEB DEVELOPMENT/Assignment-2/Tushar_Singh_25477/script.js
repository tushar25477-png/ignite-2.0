// Question 11

// Part i
function sign(a) {
  if (a > 0) {
    console.log("The number is positive");
  } else if (a == 0) {
    console.log("The number is zero");
  } else {
    console.log("The number is negative");
  }
}

// Part 2
function even_odd(a) {
  if (a % 2 === 0) {
    console.log("The number is even");
  } else {
    console.log("The number is odd");
  }
}

// Part 3
function prime(a) {
  if (a <= 1) {
    console.log("The number is 1 ,0 or negative");
  } else {
    for (let i = 2; i <= Math.sqrt(a); i++) {
      if (a % i === 0) {
        console.log("The number is not prime");
        break;
      }
    }
  }
}

// Question 12

function printPattern(n = 5) {
  for (let i = 1; i <= n; i++) {
    let row = "";
    for (let j = 1; j <= i; j++) {
      row += "* ";
    }
    console.log(row.trim());
  }
}

// Question 13
// Part 1
function count_vowel(a) {
  const vowels = "aeiouAEIOU";
  let vowelCount = 0;
  for (let char of a) {
    if (vowels.includes(char)) {
      vowelCount++;
    }
  }
  console.log(`Number of vowels is ${vowelCount}`);
}

// Part 2
function reverse(a) {
  let b = "";
  for (let i = a.length - 1; i >= 0; i--) {
    b += a[i];
  }
  console.log(b);
}

// Part 3

// sorry sir, i am not able to understand it

// Question 14
// Part i
const marks = [45, 67, 23, 89, 12, 95, 56];
let highest = marks[0];
let lowest = marks[0];
for (let i = 0; i < marks.length; i++) {
  if (marks[i] > highest) {
    highest = marks[i];
  }
  if (marks[i] < lowest) {
    lowest = marks[i];
  }
}
console.log(`Highest: ${highest}, Lowest: ${lowest}`);

// Part 2
let sum = 0;
for (let i = 0; i < marks.length; i++) {
  sum += marks[i];
}
const average = sum / marks.length;
console.log(`Average: ${average}`);

// Part 3
let aboveFifty = 0;
for (let i = 0; i < marks.length; i++) {
  if (marks[i] > 50) aboveFifty++;
}
console.log(`Number of students scoring above 50 is ${aboveFifty}`);

// Question 15
const numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];

// Part i
numbers.push(11);
numbers.shift();
// Part 2
const even = numbers.filter((a) => a % 2 === 0);

// Part 3
const double = numbers.map((a) => a * 2);

// Question 16
function bill(amount, discount = 10) {
  const discounted = amount * (discount / 100);
  const final = amount - discounted;
  return Number(final.toFixed(2));
}
// Question 17

function calculator(num1, num2, operator) {
  switch (operator) {
    case "+":
      console.log(num1 + num2);
      break;
    case "-":
      console.log(num1 - num2);
      break;
    case "*":
      console.log(num1 * num2);
      break;
    case "/":
      if (num2 === 0) {
        console.log("Division by zero is not allowed");
      } else {
        console.log(num1 / num2);
      }
    default:
      console.log("Invalid operator");
  }
}

// Question 18
const car = {
  brand: "Bugatti",
  model: "Chiron",
  year: 2024,
  price: 3000000,
};

console.log(car.brand);
console.log(car.model);
console.log(car.year);
console.log(car.price);
car.color = "Yellow";
car.price = 3200000;

// Question 19
function greet(names) {
  const greeting = [];
  for (let i = 0; i < names.length; i++) {
    greeting.push(`Hello, ${names[i]}!`);
  }
  console.log(greeting);
}

// Question 20

function findSecondLargest(arr) {
  let a = -Infinity;
  let b = -Infinity;
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > a) {
      a = arr[i];
    }
  }
  const arr2 = arr.filter((a) => a !== a);
  for (let i = 0; i < arr2.length; i++) {
    if (arr2[i] > b) {
      b = arr2[i];
    }
  }
  console.log(`The second largest element if ${b}`);
}
