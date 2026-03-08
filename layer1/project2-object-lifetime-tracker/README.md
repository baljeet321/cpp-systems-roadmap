# Project 2 — Lifetime Tracker

## Goal

This project explores **object lifetime in C++** by observing when constructors, copy operations, move operations, and destructors are executed.

Understanding object lifetime is fundamental for writing safe and efficient C++ programs, especially when dealing with **resource management and modern C++ features**.

---

## Concepts Practiced

This project focuses on the following C++ concepts:

* Constructors
* Copy constructor
* Move constructor
* Copy assignment operator
* Destructor
* Object lifetime
* Temporary objects
* `std::move`

By printing messages inside these functions, we can observe **how C++ manages objects internally**.

---

## Project Structure

```
project2-lifetime-tracker
│
├── include
│   └── tracker.hpp
│
├── src
│   ├── tracker.cpp
│   └── main.cpp
│
└── CMakeLists.txt
```

* `tracker.hpp` — class declaration
* `tracker.cpp` — class implementation
* `main.cpp` — program demonstrating object lifecycle
* `CMakeLists.txt` — build configuration

---

## What the Program Demonstrates

The program creates and manipulates objects in different ways to trigger:

* normal construction
* copy construction
* move construction
* assignment
* destruction

Each event prints a message to the console so the order of operations can be observed.

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
./main
```

---

