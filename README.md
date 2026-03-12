# Memory Management

This repository is for learning and practicing memory management in C, C++, and Rust. I use it to document my daily learning progress.

![C Language](https://img.shields.io/badge/programming-C%20Language-blue)

## 1. Pointers
- [Pointer](./1-pointers/1-pointer.c) - Basic address manipulation.
- [Double Pointer](./1-pointers/2-double-pointer.c) - Working with pointers to pointers.
- [Array Pointer](./1-pointers/3-arr-pointer.c) - The relationship between arrays and pointers.
- [Pointer with Functions](./1-pointers/4-pointer-functions.c) - Passing by reference to modify variables.

## 2. Pointer Arithmetic
- [Array Traversal](./2-pointer-arithmetic/1-array-traversal.c) - Navigating memory using address offsets.
- [Pointer Math](./2-pointer-arithmetic/2-pointer-math.c) - Using `ptr++` and `ptr--` effectively.

## 3. Dynamic Memory
- [Malloc and Free](./3-dynamic-memory/1-malloc-and-free.c) - Allocating and releasing heap memory.
- [Calloc](./3-dynamic-memory/2-calloc.c) - Contiguous allocation with zero-initialization.
- [Realloc](./3-dynamic-memory/3-realloc.c) - Resizing previously allocated memory blocks.
- [Dangling Pointer](./3-dynamic-memory/4-dangling-pointer.c) - Hazards of accessing freed memory.
- [Double Free](./3-dynamic-memory/5-double-free.c) - Preventing memory corruption errors.

## 4. Memory Borrow (Rust)
- [Immutable Borrow](./4-memory-borrow/immutable_borrow/src/main.rs) - Multiple readers, no writers.
- [Mutable Borrow](./4-memory-borrow/mutable_borrow/src/main.rs) - One writer, no readers.

## 5. Smart Pointers (C++)
- [Overview](./5-smart-pointers/README.md) - `unique_ptr`, `shared_ptr`, `weak_ptr`, deleters.
