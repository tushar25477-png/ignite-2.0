# 🟨 JavaScript Assignment – Week 3
### IGNITE'26 — Web Development / Programming Domain

Welcome to Week 3! 🚀 This week's assignment builds on last week and focuses on:

- Functions & Methods (advanced)
- Objects & DOM Basics
- Promises
- Asynchronous JavaScript (Callbacks & Async/Await)
- Advanced JavaScript Concepts (Closures, Prototypes, Higher-Order Functions)

By completing this assignment, you'll move from writing basic programs to writing interactive, asynchronous, and well-structured JavaScript.

---

## 🎯 Learning Objectives

- Understand advanced function behavior — `this`, `call`/`apply`/`bind`, closures
- Work with objects and manipulate the DOM directly
- Understand and use Promises correctly
- Write asynchronous code using callbacks and async/await
- Apply advanced concepts like closures and higher-order functions to solve problems

---

## 📋 Part A: Theoretical Questions (5 Questions)

**Ques 1:** What will be the output of the following code? Explain why.

```javascript
function regular() {
  console.log(this);
}
const arrow = () => {
  console.log(this);
};
const obj = { regular, arrow };
obj.regular();   // ?
obj.arrow();      // ?
```
Explain the difference in how `this` behaves between a regular function and an arrow function, especially when called as a method.

**Ques 2:** Explain the difference between `call`, `apply`, and `bind`. Give one short example of each (not the same example repeated three times).

**Ques 3:** What will be the output of the following code? Explain the order, referring to the call stack, microtask queue, and macrotask queue.

```javascript
console.log("1");
setTimeout(() => console.log("2"), 0);
Promise.resolve().then(() => console.log("3"));
console.log("4");
```

**Ques 4:** Explain the difference between `Promise.all()`, `Promise.race()`, `Promise.allSettled()`, and `Promise.any()`. What happens in each when one of the promises fails?

**Ques 5:** What is a closure? Explain using a short example why the variable inside a closure doesn't get garbage collected even after the outer function has finished running.

---

## 💻 Part B: Practical Coding Questions (5 Questions)

**Ques 6. Library Object**
Create an object `library` containing an array of book objects (`title`, `author`, `year`, `available`). Write methods on the object to:
- Add a book
- Remove a book by title
- List only the available books

**Ques 7. To-Do List (DOM + localStorage)**
Build a simple To-Do List using HTML + vanilla JavaScript (no frameworks) that:
- Lets the user add a task via an input field and button
- Lets the user mark a task as complete (strike-through)
- Lets the user delete a task
- Persists tasks using `localStorage` so they remain after a page refresh

**Ques 8. Promise Chain**
Write a function `delayedGreeting(name, ms)` that returns a Promise which resolves with `"Hello, {name}!"` after `ms` milliseconds. Chain 2–3 such promises using `.then()`, deliberately make one fail and catch it with `.catch()`, and log `"Done"` using `.finally()`.

**Ques 9. Callback Hell → Async/Await Refactor**
Write a callback-based function that simulates fetching data (use `setTimeout`) with at least 2 nested callbacks (callback hell). Then refactor the same logic using `async/await` so the improvement in readability is clear. Also use the Fetch API with `async/await` to fetch data from a public API (e.g. `https://jsonplaceholder.typicode.com/users`) and display it on a simple webpage, with `try/catch` error handling.

**Ques 10. Counter with Closures + Higher-Order Functions**
Write a `createCounter()` function that returns an object with `increment`, `decrement`, and `getValue` methods, where the count is private and can't be accessed directly from outside. Then, given an array of product objects (`name`, `price`, `category`), use `map`, `filter`, and `reduce` (not loops) to get the names of products under ₹500 and calculate the total price of products in a specific category.

---

## ⚠️ Note

- Assignment to be submitted by June 29, 2026
- Attempt this using only the concepts covered in this week's playlist — no external libraries.
- Do not use ChatGPT or any AI tool. Write and test the code yourself.
- Comment your code where logic might not be obvious.

🚀 **Happy Coding!**
Build, test, debug, and keep going.
