# cpp-student-vault
Object-Oriented Student Academic Record &amp; Grade Calculator written in C++.

# OOP Student Grade Vault (C++)

A compiled, object-oriented academic transcript and grade calculation system written in **Standard C++**. Built to demonstrate strict static typing, class encapsulation, STL containers (`std::vector`), and memory-safe member functions aligned with the **CPE-20-01** specification.

---

## C++ Engineering Concepts Demonstrated
- **Data Encapsulation (`private` vs. `public`):** Locks raw student data (`name` and `scores`) inside `private` class members so external functions cannot corrupt academic records directly.
- **Member Initializer Lists:** Uses a parameterized constructor (`StudentRecord(...) : name(...), scores(...)`) for efficient object instantiation.
- **Standard Template Library (`std::vector<double>`):** Replaces error-prone raw C arrays with dynamic, bounds-aware STL vectors and range-based `for` loops (`for (double score : scores)`).
- **`const` Correctness:** Marks read-only calculation and printing methods (`calculateAverage() const`) with the `const` qualifier to guarantee the compiler that calling these methods will never mutate object state.

---

## How to Compile and Run
1. Ensure you have a C++ compiler installed (such as **GCC / `g++`** via MinGW or Clang).
2. Clone the repository and open your terminal in the project folder:
   ```bash
   git clone [https://github.com/](https://github.com/)[your-github-username]/cpp-student-vault.git
   cd cpp-student-vault