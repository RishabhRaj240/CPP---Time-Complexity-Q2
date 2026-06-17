# Incremental Number Pattern Using Nested Loops in C++

A beginner-friendly C++ program that demonstrates the use of **nested `for` loops** to generate an incremental number pattern.

This project helps beginners understand how loop boundaries can be controlled dynamically to create patterns and visualize nested loop execution.

---

## 📌 Features

* Demonstrates nested `for` loops
* Generates an incremental number pattern
* Uses loop variables as dynamic boundaries
* Shows the relationship between outer and inner loops
* Beginner-friendly and easy to understand

---

## 🛠️ Technologies Used

* C++
* Standard Input/Output (`iostream`)

---

## 📂 Program Logic

The program:

1. Sets `N = 10`
2. Uses an outer loop (`i`) that runs from `0` to `10`
3. Prints the current value of `i`
4. Uses an inner loop (`j`) that runs from `0` to `i`
5. Prints numbers from `0` up to the current value of `i`

As the value of `i` increases, the number of values printed by the inner loop also increases.

---

## 📸 Screenshot

<img width="1081" height="367" alt="image" src="https://github.com/user-attachments/assets/f191c893-e284-4db5-8266-5be80e23e552" />

Example folder structure:

```txt
project-folder/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png
```

---

## 💻 Source Code

```cpp
#include<iostream>
using namespace std;

int main() {
    int N = 10;

    for (int i = 0; i <= N; i++) {
        cout << endl;
        cout << "i = " << i;
        cout << endl;

        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }
    }

    return 0;
}
```

---

## ▶️ How to Run

1. Compile the program:

```bash
g++ main.cpp -o main
```

2. Run the executable:

```bash
./main
```

---

## 📸 Example Output

```txt
i = 0
0

i = 1
0 1

i = 2
0 1 2

i = 3
0 1 2 3

i = 4
0 1 2 3 4

...
```

---

## 📖 Learning Concepts

This project helps beginners understand:

* Nested loops
* Pattern generation
* Dynamic loop boundaries
* Iteration control
* Time complexity basics
* Console output formatting

---

## 🔍 Pattern Explanation

The inner loop condition:

```cpp
j <= i
```

means that for every value of `i`, the inner loop prints numbers from `0` to `i`.

For example:

| i | Output    |
| - | --------- |
| 0 | 0         |
| 1 | 0 1       |
| 2 | 0 1 2     |
| 3 | 0 1 2 3   |
| 4 | 0 1 2 3 4 |

This creates a growing number pattern where each row contains one more number than the previous row.

---

## 👨‍💻 Author

Developed as a beginner-friendly C++ practice project for learning nested loops, pattern generation, and iteration concepts.
