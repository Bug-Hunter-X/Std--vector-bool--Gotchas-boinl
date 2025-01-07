# std::vector<bool> Gotchas

This repository demonstrates a common pitfall when using `std::vector<bool>` in C++.  `std::vector<bool>` is a specialization that behaves differently from other vector types, often causing unexpected results.

## The Problem

Unlike other `std::vector` instantiations, `std::vector<bool>` doesn't store booleans directly. Instead, it uses a bitset for memory efficiency.  This optimization leads to several consequences:

* **No `operator[]` returning a reference:**  You can't directly modify elements using `[]` as you would with other vector types.
* **Iterators are not standard random access iterators:** Algorithms that rely on random access iterators (e.g., `std::random_shuffle`) might not work as expected.
* **Element access is slower:** Retrieving individual elements can be less efficient than with a regular `std::vector`.

## Solution

The best solution is to use `std::vector<bool>` sparingly or to avoid it altogether. For most cases, `std::vector<char>` (using a single bit to represent a boolean) or `std::vector<int>` (using an integer for boolean) is an excellent alternative providing true boolean values with optimal performance.
