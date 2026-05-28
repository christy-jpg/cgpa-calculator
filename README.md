# 📊 Statistics Department CGPA Calculator

A robust, console-based C++ application designed to help university students calculate their Semester GPA and Cumulative Grade Point Average (CGPA). Preloaded with a complete, multi-semester Statistics curriculum, this tool allows students to calculate, simulate, and plan their academic progress easily.

---

## 🌟 Key Features

*   **🎓 Preloaded Curriculum:** Contains complete templates for 8 semesters (Freshman to Senior Year) specifically tailored for the **Statistics Department**.
*   **🛠️ Interactive Course Modification:**
    *   Change course credit hours on the fly.
    *   Add new elective or retake courses.
    *   Remove dropped courses.
*   **✏️ Flexible Grade Inputs:** Enter grades as either a **numeric score (0–100)** or a **letter grade (A+, A, B, etc.)**.
*   **🛡️ Robust Error Handling:**
    *   Automatic lower-case to upper-case standardization (e.g., converts `a-` to `A-`).
    *   Division-by-zero prevention.
    *   Handles zero-credit courses (like Physical Fitness or Practical Attachments) properly so they don't skew GPA.
*   **🔄 Session-based calculations:** Run multiple calculation scenarios back-to-back in a single execution.

---

## 📐 How GPA & CGPA are Calculated

Academic GPAs are **credit-weighted averages** rather than basic averages. This tool uses the mathematically precise formula:

$$\text{GPA} = \frac{\sum (\text{Grade Point} \times \text{Credit Hours})}{\sum \text{Credit Hours}}$$

$$\text{CGPA} = \frac{\text{Grand Total Quality Points}}{\text{Grand Total Credit Hours}}$$

### 🎓 Grading Scale Used
| Score Range | Letter Grade | Grade Point |
| :--- | :--- | :--- |
| **90 – 100** | A+ | 4.00 |
| **85 – 89**  | A  | 4.00 |
| **80 – 84**  | A- | 3.75 |
| **75 – 79**  | B+ | 3.50 |
| **70 – 74**  | B  | 3.00 |
| **65 – 69**  | B- | 2.75 |
| **60 – 64**  | C+ | 2.50 |
| **50 – 59**  | C  | 2.00 |
| **45 – 49**  | C- | 1.75 |
| **40 – 44**  | D  | 1.00 |
| **Below 40** | F  | 0.00 |

---

## 🚀 How to Run the Program Locally

### Prerequisites
You need a C++ compiler installed on your system (like **GCC/MinGW** for Windows, **Clang** for macOS, or **GCC** for Linux).

### Steps
1.  **Clone the repository:**
    ```bash
    git clone https://github.com/YOUR_GITHUB_USERNAME/cgpa-calculator.git
    cd cgpa-calculator
    ```

2.  **Compile the code:**
    Use your preferred terminal to compile `main.cpp`:
    ```bash
    g++ -o cgpa_calculator main.cpp
    ```

3.  **Run the application:**
    *   **Windows:**
        ```bash
        cgpa_calculator.exe
        ```
    *   **Mac/Linux:**
        ```bash
        ./cgpa_calculator
        ```

---

## 💻 Tech Stack
*   **Language:** C++11 or higher
*   **Standard Libraries:** `<iostream>`, `<string>`, `<cctype>`

---

## 📝 License
This project is open-source and available under the [MIT License](LICENSE).
