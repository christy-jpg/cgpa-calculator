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

## 🚀 How to Run the Program Locally (Using Dev-C++)

### Prerequisites
Ensure you have **Dev-C++** installed on your Windows PC. Dev-C++ is a lightweight IDE (Integrated Development Environment) that includes a pre-packaged C++ compiler.

### Steps to Run:
1.  **Download the Project:**
    *   Download the repository files to your computer (either by cloning it with Git or clicking the green **Code** button on GitHub and choosing **Download ZIP**).
2.  **Open the code in Dev-C++:**
    *   Launch **Dev-C++**.
    *   Go to the top menu and select **File ➡️ Open Project or File...** (or press `Ctrl + O`).
    *   Navigate to your downloaded folder and select **`main.cpp`**.
3.  **Compile & Run:**
    *   Go to the top menu and click on **Execute ➡️ Compile & Run** (or simply press the **`F11`** hotkey on your keyboard).
    *   A console window will pop up showing the Statistics Department CGPA Calculator running!

---

## 💻 Tech Stack
*   **Language:** C++11 or higher
*   **Standard Libraries:** `<iostream>`, `<string>`, `<cctype>`

---

## 📝 License
This project is open-source and available under the [MIT License](LICENSE).
