
---

# Linear Search Implementation

This project demonstrates a **Linear Search Algorithm** implemented in C++. The program searches for an element in an array by sequentially checking each element until the target is found or the end of the array is reached.

## Files

### 1. `linearsearch.cpp`
This source file contains the implementation of the linear search algorithm. It performs the following tasks:
- Takes an array of integers.
- Sequentially searches for a target value.
- Returns the index of the target if found, or indicates that the value is not present.

## How to Compile

To compile the project, use the following command in your terminal:

```bash
g++ -o linear_search linearsearch.cpp
```

This will create an executable file named `linear_search`.

## How to Run

After compiling, run the program with:

```bash
./linear_search
```

The program will:
1. Prompt the user to enter the size of the array and the elements of the array.
2. Prompt the user to enter the target value to search for.
3. Output the index of the target value in the array or indicate that it was not found.

### Example Output:

```
Enter the number of elements: 5
Enter 5 elements: 8 4 2 9 3
Enter the number to search: 9
9 found at index 3
```

## Dependencies

- A C++ compiler (e.g., `g++`).
- The input array does not need to be sorted for linear search.
---