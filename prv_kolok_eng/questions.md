# Questions (First Partial Exam)

---

## 1. Sum of Hidden Integers in Text

**Description**:  
From standard input (SI), read characters until you read the character `!`. In these characters are hidden integers (smaller than 100). Write a program that reads all characters and prints the sum of all integers hidden in the text.

Use:
```cpp
cin >> noskipws >> znak;
```
to read all the characters including spaces.

**Example**:
```
Input:
ako34D neka12em bashka41mewr!

Result:
87
```

---

## 2. Divisibility Based on Middle and Edge Digits

**Description**:  
Read from SI two integers `a` and `b`. Print all numbers from `a` to `b` (`a < b`) such that the product of the middle digits is divisible by the number created from the first and last digits. Do not print numbers where the product of middle digits is 0. Print the count at the end.

**Example**:
```
Input:
500 1500

Result:
1250 -> (10 == 10 * 1)
1262 -> (12 == 12 * 1)
1274 -> (14 == 14 * 1)
1286 -> (16 == 16 * 1)
1298 -> (18 == 18 * 1)
1342 -> (12 == 12 * 1)
1355 -> (15 == 15 * 1)
1368 -> (18 == 18 * 1)
1382 -> (24 == 12 * 2)
1432 -> (12 == 12 * 1)
1446 -> (16 == 16 * 1)
1450 -> (20 == 10 * 2)
1462 -> (24 == 12 * 2)
1474 -> (28 == 14 * 2)
1486 -> (32 == 16 * 2)
1492 -> (36 == 12 * 3)
1498 -> (36 == 18 * 2)
17
```

---

## 3. Square Pattern with '+' and '-'

**Description**:  
Using the characters `+` and `-`, form a square image with width `n` (`n > 2`). The border is `+`, inside is `-`.

**Example**:
```
Input:
3

Result:
+++
+-+
+++
```

---

## 4. Grade Calculation Based on Points

**Description**:  
From SI read `N` pairs (points, max points). For each, calculate percentage and assign grade:
- ≥ 90% → 10
- ≥ 80% → 9
- ≥ 70% → 8
- ≥ 60% → 7
- ≥ 50% → 6
- < 50% → FAIL

**Example**:
```
Input:
3
19 20
27 40
55 70

Result:
95 10
67.5 7
78.5714 8
```

---

## 5. Age Verification Based on Birth Dates

**Description**:  
Read today's date in format DDMMYYYY. Then read N birthdates. Print "YES" if the person is 18 or older, else "NO".

**Example**:
```
Input:
15032015
12
12121992
16031997
12121980
12041997
01011999
23121976
28071955
16091985
19950817
04061983
16111981
25021951

Result:
YES
NO
YES
NO
NO
YES
YES
YES
YES
YES
YES
YES
```

---

## 6. Interesting Numbers (Reversed Divisible by Digit Count)

**Description**:  
A number is interesting if its reversed form is divisible by its digit count. Read integer `n > 9`. Print largest such number less than `n`. If input is invalid, print an error.

**Example**:
```
Input:
5

Result:
The number is invalid
```

---

## 7. Max Sum of Divisors

**Description**:  
Read integer `n`. Find the number < `n` with maximum sum of divisors (excluding itself).

**Example**:
```
Input:
50

Result:
48
```

---

## 8. Reversed Middle Digits and Divisibility

**Description**:  
Read integers `a` and `b`. For each number in [a, b], check if reversed middle digits are divisible by sum of first and last digit. Print each valid number with explanation and total count.

**Example**:
```
291 -> (9 == (1 + 2) * 3)
84575 -> (754 == (5 + 8) * 58)
```

---

## 9. Minimum Difference in Triplets

**Description**:  
Read unknown number of integer triplets. Print the two with smallest absolute difference, or all if two pairs have equal difference.

**Example**:
```
Input:
5 1 7
10 2 18

Result:
5 7
2 10 18
```

---

## 10. Count and Percentage of Pairs with Target Sum

**Description**:  
Read one number `z`. Then read pairs `(a, b)` until (0, 0). Count and calculate percentage of pairs where `a + b == z`.

**Example**:
```
Input:
100
50 50
-50 -50
-99 199
32 98
0 0

Result:
You entered 2 pairs of numbers that have a sum equal to 100
The percentage of pairs with sum 100 is 50%
```

---

## 11. Triangle Type Based on Angles

**Description**:  
Read three angles A, B, C. Determine if they form a triangle and what type (RIGHT, ACUTE, OBTUSE).

**Examples**:
```
60 40 80 -> YES ACUTE
100 50 30 -> YES OBTUSE
100 50 50 -> NO
```

---

## 12. Digit Shift Comparison

**Description**:  
Read integer `N` then `N` pairs of integers. Move last digit of first number to front. Print YES if result is greater than second number, else NO.

**Example**:
```
Input:
4
56 4532
423 90
90 300
543 300

Result:
NO
YES
NO
YES
```

---

## 13. Sweet Numbers

**Description**:  
A sweet number contains only even digits. From SI read `m` and `n`. Find smallest sweet number in that range. If none, print "NSN".

**Example**:
```
Input:
1000 5000

Result:
2000
```

---
