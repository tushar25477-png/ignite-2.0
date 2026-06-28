# Week 2 JavaScript — Theory Answers

## Ques 1: What will be the output of the following code? Explain why.

```js
console.log(typeof a); // ?
console.log(typeof b); // ?
var a = 5;
let b = "hello";
```

**Output:** `undefined` `ReferenceError`

**Explanation:** `var` is hoisted but it does not take any value because in the hoisting process it goes upward without taking the value of a. `let` gives an error because it is in TDZ and gives output of ReferenceError.

---

## Ques 2: What will be the output? Explain the type conversion happening.

```js
console.log("10" + 5); // ?
console.log("10" - 5); // ?
console.log(10 + true); // ?
console.log("5" == 5); // ?
console.log("5" === 5); // ?
```

**Output:** `105` `5` `11` `true` `false`

**Explanation:** In `console.log("10" + 5);` JS converts 5 into a string and adds it to the end of 10, i.e. 105. In `console.log("10" - 5);` unlike `+`, JS converts "10" into a number. In `console.log(10 + true);` true behaves as 1 and adds with 10. In `console.log("5" == 5);` for `==` the engine converts string "5" into a number and compares it with 5, but for `===` it compares string with a number, so it gives a false result.

---

## Ques 3: Write code to: Declare a variable using var, let, and const, and explain one key difference between them. Swap the values of two variables without using a third variable. Check whether a given number is even or odd using an if-else statement.

```js
var a = "string";
let b = 5;
const c = true;
```

**Explanation:** In `var`, the value of the variable can be changed/overwritten and it is not confined within {braces}. In `let`, the value of the variable can be changed/overwritten and it is confined within {braces}. In `const`, the value of the variable can't be changed/overwritten and it is also confined within {braces}.

```js
let a = 10;
let b = 20;
[a, b] = [b, a];
console.log(a);
console.log(b);
```

**Output:** `20` `10`

**Explanation:** Using array destructuring and the assignment operator `=`, it assigns the value of b into a and the value of a into b.

```js
let a = 10;
if (a % 2 === 0) {
  console.log("The number is even");
} else {
  console.log("The number is odd");
}
```

**Output:** `"The number is even"`

**Explanation:** Using conditioning statement if-else `%` operator give the remainder that confirm the number is odd or even.Because the condition is true, JavaScript executes the code inside the if block and skips the else block entirely.

---

## Ques 4: Explain the difference between == and === in JavaScript with at least two examples.

**Explanation:** `==` this operator is loose equality and convert different type of datatype into common data type whereas `===` this operator is strict equality and compare the value and data type both.

```js
console.log(1 == true);
console.log(1 === true);
```

**Output:** `"true"` `"false"`

**Explanation:** In first `boolean true` convert into `1` and then compare with `1` and in second `1` is directly compare with `boolean true` that give false result.

```js
console.log("5" == 5);
console.log("5" === 5);
```

**Output:** `"true"` `"false"`

**Explanation:** In first `"5"` convert into a number data type from string data type and then compare with `5` and in second string `"5"` is directly compare with a number `5` that give false result.

---

## Ques 5: What will be the output of the following code? Explain the loop execution step by step.

```js
for (let i = 1; i <= 5; i++) {
  if (i === 3) continue;
  if (i === 5) break;
  console.log(i);
}
```

**Output:** `1` `2` `4`

**Explanation:** `continue` skips 3 and `break` stops the loop at 5, so only 1, 2, and 4 are printed.

---

## Ques 6: Explain the difference between a for loop, a while loop, and a do-while loop. When would you use each?

**Explanation:** `for-loop` is used when the number of limit is known. `while` loop is used when the number of limit is unknown. `do-while` loop executes at least one time before checking the condition.

---

## Ques 7: Write code to convert:.String "Hello World" to uppercase and lowercase.A sentence into an array of words.An array of words back into a single sentence

```js
let str = "Hello World";
console.log(str.toUpperCase());
console.log(str.toLowerCase());
```

**Output:** `"HELLO WORLD"` `"hello world"`

**Explanation:** `toUpperCase()` converts text to uppercase and `toLowerCase()` converts text to lowercase.

```js
let sentence = "Hello World JavaScript";
let words = sentence.split(" ");
console.log(words);
```

**Output:** `["Hello", "World", "JavaScript"]`

**Explanation:** `split()` converts a string into an array and we need to use `split(" ")` for string of words.

```js
let words = ["Hello", "World", "JavaScript"];
let sentence = words.join(" ");
console.log(sentence);
```

**Output:** `"Hello World JavaScript"`

**Explanation:** `join()` converts an array into a string and we need to use `join(" ")` for words into proper space to form a sentence.

---

## Ques 8: What's the difference between a function declaration and a function expression? Give one example of each.

**Explanation:** Function declarations are hoisted, but function expressions are not hoisted.
*Review* => This is not completely true, Function declarations are fully hoisted and can be called before they appear in the code. Function expressions are assigned to variables, so only the variable declaration is hoisted. If declared with var, the variable is initially undefined; with let or const, accessing it before initialization results in a ReferenceError
`Function declaration`

```js
function greet() {
  return "Hello";
}
console.log(greet());
```

**Output:** `"Hello"`

`Function expression`

```js
const greet = function () {
  return "Hello";
};
console.log(greet());
```

**Output:** `"Hello"`

---

## Ques 9: Explain the difference between an array and an object in JavaScript. When would you use one over the other?

**Explanation:** `Arrays` store same type of data with indexes while `Objects` store different type of data as key-value.

```js
let fruits = ["Apple", "Banana", "Mango"];
```

**Explanation:** Arrays for lists of items.

```js
let person = {
  name: "Rahul",
  age: 22,
};
```

**Explanation:** Objects for related properties.

---

## Ques 10: What will be the output of the following code? Explain the array method being used.

```js
const nums = [10, 20, 30, 40, 50];

console.log(nums.length);
console.log(nums[2]);
console.log(nums.includes(40));
```

**Output:** `5` `30` `"true"`

Explanation: length returns the number of elements, nums[2] give the third element, and includes(40) checks 40 exists in the array.
