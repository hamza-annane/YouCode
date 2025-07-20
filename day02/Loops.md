
# 🔁 C Programming Practice – Loop-Based Challenges

This repository includes 20 loop-focused C challenges to help you master iterations (`while`, `for`, `do-while`) and logic. The first 10 exercises cover fundamental looping techniques, while the last 10 push your problem-solving to a FAANG-style level.

---

## 📘 Basic Loop Challenges (1–10)

### ✅ Challenge 1: Multiplication Table

Write a C program that asks the user for a number and displays its multiplication table from 1 to 10.  
Example:  
```
4 * 1 = 4  4 * 2 = 8  ...  4 * 10 = 40
```

---

### ✅ Challenge 2: Factorial of a Number

Calculate the factorial of a positive integer `n` entered by the user.  
Example: `5! = 120`

---

### ✅ Challenge 3: Sum of N Numbers

Ask the user for an integer `n` and compute the sum of the first `n` natural numbers.  
Example: `1 + 2 + 3 + 4 = 10`

---

### ✅ Challenge 4: First N Odd Numbers

Print the first `n` odd numbers.  
Example: `1, 3, 5, 7, 9`

---

### ✅ Challenge 5: Power Calculation

Calculate the power of a number `base` raised to `exponent` using a loop.  
Example: `3^4 = 81`

---

### ✅ Challenge 6: First N Even Numbers

Display the first `n` even numbers.  
Example: `2, 4, 6, 8`

---

### ✅ Challenge 7: Reverse an Integer

Read a multi-digit integer and print it in reverse order **without using arrays**.  
Example: Input `12345` → Output `54321`

---

### ✅ Challenge 8: Fibonacci Sequence

Generate the first `n` terms of the Fibonacci sequence.  
Definition:  
F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2)

---

### ✅ Challenge 9: Digit Counter

Count how many digits a given positive integer has.  
Example: Input `12345` → Output `5 digits`

---

### ✅ Challenge 10: Sum of First N Natural Numbers

Calculate the sum of the first `n` natural numbers using a loop.  
Example: `1 + 2 + 3 = 6`

---

## 🚀 Advanced Loop Challenges (11–20)

### 🔥 Challenge 11: Armstrong Number Checker

Check if a number is an Armstrong number.  
Example: `153 → 1³ + 5³ + 3³ = 153`

---

### 🔥 Challenge 12: Prime Number Tester

Check if a number is prime. Also display all prime numbers between 1 and `n`.

---

### 🔥 Challenge 13: GCD and LCM

Calculate the GCD and LCM of two integers using loops.

---

### 🔥 Challenge 14: Binary to Decimal Converter

Convert a binary number (e.g., `1101`) to its decimal value using a loop.

---

### 🔥 Challenge 15: Palindrome Number

Check if an integer reads the same backward and forward.  
Example: `121 → Palindrome`, `123 → Not`

---

### 🔥 Challenge 16: Star Pyramid Pattern

Print a pyramid pattern of stars `*` with `n` rows.  
Example:
```
   *
  ***
 *****
*******
```

---

### 🔥 Challenge 17: Repeated Digit Sum

Keep summing the digits of a number until a single-digit result is obtained.  
Example: `9875 → 2`

---

### 🔥 Challenge 18: Digit Frequency Counter

Count how many times each digit appears in a number like `1223334444`.  
Expected:
```
Digit 1 → 1 time  
Digit 2 → 2 times  
Digit 3 → 3 times  
Digit 4 → 4 times
```

---

### 🔥 Challenge 19: Decimal to Binary Converter

Convert a given decimal number into binary using loops (no `%b` formatting).

---

### 🔥 Challenge 20: Perfect Number Checker

Check whether a number is a **perfect number**:  
Sum of its proper divisors equals the number.  
Examples: `6`, `28`

---

## 📁 How to Use

Each challenge should be implemented in a separate `.c` file:
```
challenge01.c
challenge02.c
...
challenge20.c
```

Compile and run:
```bash
gcc challenge01.c -o challenge01
./challenge01
```

---

## 🧠 Bonus Practice Ideas

- Refactor your solutions using functions.
- Avoid `for` loops if you're preparing for 42 School.
- Try solving with only `while` loops and no libraries beyond `stdio.h`.

---

Happy Coding! 🚀
