# 🚀 My C++ Journey

This repository chronicles my deep dive into C++ programming, following the legendary [C++ Series by The Cherno](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb) (Yan Chernikov).

The goal of this project is to move from "C++ Syntax" to "System-Level Understanding"—mastering memory, pointers, and performance optimization.

---

## 📚 About This Repository

This code is written by me as I follow along with the tutorials. It serves as:
1.  **A Knowledge Base:** Documenting specific C++ mechanics (e.g., Virtual Tables, Move Semantics).
2.  **A Playground:** Experimenting with manual memory management and optimization techniques.
3.  **A Progress Tracker:** Logging my path from "Hello World" to building complex systems.

> **Attribution:**  
> The educational content, structure, and core concepts implemented here are derived from **The Cherno's C++ Series**. This repository acts as a student's notebook and derivative work for educational purposes. Please support the original creator by subscribing to [The Cherno on YouTube](https://www.youtube.com/@TheCherno).

---

## 🛠️ Progress Log

### Phase 1: The Basics & Setup
- [ ] Environment Setup (Visual Studio / Linker Config)
- [ ] Variables & Functions
- [ ] Header Files & The Preprocessor
- [ ] Conditions & Loops
- [ ] Control Flow (continue, break, return)

### Phase 2: Memory & Pointers (The "Metal")
- [ ] **Pointers:** Raw memory addresses & dereferencing
- [ ] **References:** Aliasing & performance implications
- [ ] **Stack vs Heap:** Understanding object lifetime
- [ ] **new / delete:** Manual memory allocation

### Phase 3: Object-Oriented C++
- [ ] Classes vs Structs
- [ ] Static (Linker scope vs Class scope)
- [ ] Constructors & Destructors
- [ ] Inheritance
- [ ] **Virtual Functions:** Polymorphism & V-Tables
- [ ] Interfaces (Pure Virtual Functions)

### Phase 4: Intermediate / "The Cherno" Specials
- [ ] Arrays (Raw vs std::array)
- [ ] Strings (std::string vs const char*)
- [ ] String Literals
- [ ] **CONST:** The "const" keyword everywhere
- [ ] Member Initializer Lists
- [ ] Operator Overloading
- [ ] The `this` keyword

### Phase 5: Advanced & Optimization
- [ ] Object Lifetime (Scope)
- [ ] **Smart Pointers:** `std::unique_ptr`, `std::shared_ptr`
- [ ] Copy Constructors (Deep vs Shallow)
- [ ] **Move Semantics:** lvalues vs rvalues (Optimization)
- [ ] Templates & Generics
- [ ] Macros (and why to avoid them)
- [ ] Dynamic Arrays (`std::vector` implementation)

---

## 📝 Key Takeaways & Notes

*Use this section to write down "Aha!" moments or things that stumped you.*

*   **Pointers:** A pointer is just an integer that holds a memory address. Types are just a fiction to make the compiler happy.
*   **Linker Errors:** usually happen because a symbol was declared but never defined.
*   *(Add your own notes here as you learn)*

---

## 💻 How to Build

This project is set up as a standard C++ solution.

**Prerequisites:**
*   Visual Studio 2022 (Recommended) or any C++ Compiler (GCC/Clang)
*   Premake (Optional, if you decide to use it later)

**Steps:**
1.  Clone the repo:
    ```bash
    git clone https://github.com/YourUsername/Ycherno-cpp-series.git
    ```
2.  Open the `.sln` file in Visual Studio.
3.  Select **Debug** or **Release** mode.
4.  Build and Run (F5).

---

## 📄 License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.# cherno-cpp-series
