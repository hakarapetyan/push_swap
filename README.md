# 🔄 Push_swap: The Art of Sorting with Two Stacks

### 📖 Project Overview
The Push_swap project is a logical and algorithmic challenge. The goal is simple: sort a list of integers. However, the constraints make it a puzzle. You only have two stacks (Stack A and Stack B) and a limited set of operations to move and reorder the numbers.

The objective is to write a C program that finds the shortest possible sequence of instructions to sort the data. This project is an introduction to algorithm complexity and the search for the most efficient solution.

### 🎮 The Rules of the Game
We start with:

Stack A: Contains a random list of unique positive or negative integers.

Stack B: Starts empty.

Available Operations
To sort the numbers, you can only use these commands:

Push (pa, pb): Move the top element from one stack to the other.

Swap (sa, sb, ss): Swap the first two elements at the top of a stack.

Rotate (ra, rb, rr): Shift all elements up by one (the first becomes the last).

Reverse Rotate (rra, rrb, rrr): Shift all elements down by one (the last becomes the first).

### 🧩 Objectives
Efficiency: It is not enough to just sort the numbers; you must do it in the fewest moves possible.

Error Handling: The program must handle non-integers, numbers exceeding INT_MIN/MAX, or duplicate values by displaying "Error".

Complexity: You will learn to compare different sorting strategies (like Radix sort, Turk algorithm, or simple greedy searches) to see which fits the stack constraints best.

### ⚙️ Technical Requirements
Memory Management: Every byte allocated on the heap must be freed to ensure zero memory leaks.

Standard C: Written in accordance with the Norm using only allowed functions (write, read, malloc, free, exit).

Custom Tools: We are allowed to use your own Libft and ft_printf to help build the logic.

No Global Variables: All data must be passed through functions or structures.

### 📦 Instructions
Compilation
To compile the program, run:
```bash
make
```
Usage
Run the program by passing a list of integers as arguments. It will output the list of instructions:
```bash
$> ./push_swap 2 1 3 6 5 8
sa
pb
pb
ra
...
```
Testing
You can verify the result by using the checker tool provided by 42:
```bash
$> ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_OS $ARG
OK
```
To count how many moves your algorithm used:
```bash
$> ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
6
```

