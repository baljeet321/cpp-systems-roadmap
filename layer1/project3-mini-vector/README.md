# Project 3 — MiniVector (Dynamic Array)

## Goal

The goal of this project is to build a simplified version of a dynamic array similar to `std::vector`.
This project focuses on understanding **how containers manage memory and grow dynamically**.

By implementing a custom container, we learn how C++ standard library containers handle memory allocation, resizing, and element storage internally.

---

## Concepts Practiced

This project introduces several important C++ concepts:

* Dynamic memory allocation
* Heap memory management
* Size vs capacity
* Automatic container resizing
* Memory reallocation
* Amortized time complexity
* Container design

These concepts are fundamental for understanding how containers like `std::vector` work internally.

---

## What MiniVector Does

MiniVector stores integers and allows elements to be added dynamically.

Example usage conceptually:

```
MiniVector v;

v.push_back(10);
v.push_back(20);
v.push_back(30);

v[1] → 20
```

The container automatically resizes its memory when it runs out of space.

---

## Internal Design

MiniVector maintains three core pieces of information:

```
data pointer → pointer to heap memory
size         → number of elements currently stored
capacity     → total allocated storage
```

Example state:

```
data → [10][20][30][ ][ ][ ][ ][ ]
size = 3
capacity = 8
```

When the container becomes full, a larger memory block is allocated and the existing elements are copied into it.

---

## Growth Strategy

When the container runs out of space, the capacity grows using a doubling strategy:

```
capacity = capacity * 2
```

Example growth pattern:

```
2 → 4 → 8 → 16 → 32
```

This strategy ensures efficient insert operations and provides **amortized O(1)** complexity for `push_back`.

---

## Supported Operations

MiniVector supports the following operations:

* Constructor
* Destructor
* `push_back()` – add element to the end
* `pop_back()` – remove last element
* `operator[]` – access elements by index
* `size()` – number of stored elements
* `capacity()` – total allocated storage

---

## Project Structure

```
project3-minivector
│
├── include
│   └── minivector.hpp
│
├── src
│   ├── minivector.cpp
│   └── main.cpp
│
└── CMakeLists.txt
```

* `minivector.hpp` — container interface
* `minivector.cpp` — container implementation
* `main.cpp` — test program
* `CMakeLists.txt` — build configuration

---

## Build Instructions

Create a build directory and compile the project:

```
mkdir build
cd build
cmake ..
cmake --build .
```

---

## Run the Program

After building, run the executable:

```
./minivector
```

---

## Expected Learning Outcome

After completing this project you should understand:

* how dynamic arrays grow
* how containers manage memory
* how `std::vector` works internally
* why doubling capacity improves performance

This knowledge forms the foundation for implementing more advanced data structures in C++.

---
