# 💻 C Programming Practice – Conditional Logic Challenges

This repository contains a set of 20 C programming challenges designed to improve your understanding of conditional statements. The first 13 challenges cover foundational logic, and the last 7 introduce more advanced FAANG-style problems to prepare you for real-world and technical interviews.

---

## 📘 Basic Challenges (1–13)

### ✅ Challenge 1: Even or Odd
Write a program that asks for a number and displays whether it is even or odd.

---

### ✅ Challenge 2: Vowel or Not
Write a C program that checks if a character entered by the user is a vowel using `switch case`.

---

### ✅ Challenge 3: Sum of Two Values
Write a program to compute the sum of two integers. If both values are equal, return triple their sum.

---

### ✅ Challenge 4: Quadratic Equation
Write a program to calculate the possible real solutions of a quadratic equation.

---

### ✅ Challenge 5: Year Conversion
Create a menu-driven program to convert a given year into:
- Months  
- Days  
- Hours  
- Minutes  
- Seconds  

> Assume 1 year = 365 days, 1 month = 30 days (no leap year support).

---

### ✅ Challenge 6: Positive, Negative, or Zero
Check if a number is positive, negative, or zero.

---

### ✅ Challenge 7: Uppercase Alphabet
Check whether a character is an uppercase letter using ASCII values (`if-else`).

---

### ✅ Challenge 8: Grade Mention
Display a student’s mention based on their average:
- `< 10` → Fail  
- `10–11.99` → Pass  
- `12–13.99` → Fair  
- `14–15.99` → Good  
- `≥ 16` → Very Good

---

### ✅ Challenge 9: Alphabet Check
Determine if a character is an alphabet. If yes, specify whether it's uppercase or lowercase.

---

### ✅ Challenge 10: Date Formatting
Convert a date from `15/09/2012` to `15-September-2012`.

---

### ✅ Challenge 11: Random Weekday
Display a random day of the week using a C program.

---

### ✅ Challenge 12: Time Comparison
Compare two time inputs (`HH:MM:SS`) and print:
- First comes before second  
- Second comes before first  
- Both times are equal

---

### ✅ Challenge 13: Point on Segment
Given two segment endpoints and a point, check if the point lies on the segment.

---

## 🚀 Advanced Challenges (14–20)

### 🔥 Challenge 14: Triangle Type Checker
Given three side lengths, determine if they form a valid triangle. If yes, classify as:
- Equilateral  
- Isosceles  
- Scalene  
- Invalid (violates triangle inequality)

---

### 🔥 Challenge 15: Leap Year Validator
Check if a year is a leap year using:
- Divisible by 4 and not 100  
- Or divisible by 400

---

### 🔥 Challenge 16: Time to Words
Convert a time `HH:MM` into words.  
Examples: `05:00` → `"Five o'clock"`, `05:15` → `"Quarter past five"`

---

### 🔥 Challenge 17: Valid Password Checker
Validate a password with the following rules:
- ≥ 8 characters  
- At least 1 uppercase  
- At least 1 lowercase  
- At least 1 digit  
- At least 1 special character (`!@#$%^&*`)

---

### 🔥 Challenge 18: Date Validator
Validate a date (`DD/MM/YYYY`) considering:
- Days in each month  
- Leap year rules for February

---

### 🔥 Challenge 19: Roman Numerals Converter
Convert an integer between `1–3999` to its Roman numeral equivalent.  
Example: `1994` → `MCMXCIV`

---

### 🔥 Challenge 20: Smart Traffic Light System
Simulate a smart traffic light using:
- Car detection (yes/no)  
- Pedestrian request (yes/no)  
- Time of day (day/night)

Apply logic to decide whether to switch lights based on input.

---

## ✅ Tips for Practice

- Focus on using `if`, `else if`, `else`, `switch`, and logical operators.
- Use `while` and functions to organize your solutions cleanly.
- Avoid unnecessary library usage—stick to basics unless required.

---

## 📁 How to Use

```bash
gcc challenge01.c -o challenge01
./challenge01
