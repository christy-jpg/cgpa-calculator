#include <iostream>  // Allows us to use input and output (cin and cout)
#include <string>    // Allows us to use the string data type
#include <cctype>    // neede for toupper, to change lowercase to upercase with no trouble.
using namespace std; // Lets us write cout instead of std::cout

// Global Variables are declared here.

const int MAX_COURSES = 60;
string courseNames[MAX_COURSES]; // arrays to hold multiple values of the same type
string courseCodes[MAX_COURSES];
string courseTypes[MAX_COURSES];
int creditHours[MAX_COURSES];
int ects[MAX_COURSES];
int courseCount;

// FUNCTION PROTOTYPES
// These declarations tell the compiler that these functions exist later in the program.

// Semester initialization functions, (previews) we will use these to fill in the arrays with the correct courses for each semester.
// Void means function doesn't return value. () means no parameters passed in. The  function’s job is simply to print out all the courses currently loaded.
void initializeFreshmanSemester1();
void initializeFreshmanSemester2();
void initializeSophomoreSemester1();
void initializeSophomoreSemester2();
void initializeJuniorSemester1();
void initializeJuniorSemester2();
void initializeSeniorSemester1();
void initializeSeniorSemester2();

// Course display and modification
void displayCourses();
void modifyCourses();

// GPA and CGPA functions
double calculateGPA(double totalQualityPoints, int totalCredits);
void calculateMultipleSemesterCGPA(); // loop through multiple semesters and calculate each GPA, and then compute CGPA

// Grade conversion functions
double numericToPoint(int score);
string numericToLetter(int score);
double letterToPoint(string grade);

// The main function is where program execution begins.
int main()
{
    // Variable used to determine whether the user wants to run again.
    char runAgain;

    do // A do–while loop runs the block of code at least once, then checks the condition at the end. And then if condition is true it repeats the code, if not it exits the loop.
    {
        // Display the program title.
        cout << "========================================" << endl;
        cout << "   STATISTICS DEPARTMENT CGPA CALCULATOR" << endl;
        cout << "========================================" << endl;

        // Display a short explanation of what the program does.
        cout << endl;
        cout << "Welcome to the Statistics Department CGPA Calculator." << endl;
        cout << "This program can calculate GPA for one or more semesters" << endl;
        cout << "and then compute your final cumulative GPA (CGPA)." << endl;
        cout << "You can:" << endl;
        cout << "- Select any semesters from Freshman to Senior year." << endl;
        cout << "- Temporarily modify course credit hours." << endl;
        cout << "- Temporarily add or remove courses." << endl;
        cout << "- Enter grades as numeric scores or letter grades." << endl;
        cout << "- View semester GPA and final CGPA." << endl;
        cout << endl;
        cout << "Note: Any course modifications are temporary and" << endl;
        cout << "apply only to the current calculation session." << endl;
        cout << endl;

        // Call our function to Run the CGPA calculator.
        calculateMultipleSemesterCGPA();

        // Ask the user whether to run the program again.
        cout << endl;
        cout << "========================================" << endl;
        cout << "Do you want to perform another calculation?" << endl;
        cout << "Enter Y to run again or any other key to exit: ";
        cin >> runAgain;

        // Convert safely to uppercase
        runAgain = toupper(runAgain);

        /* if we didn't use the #include <cctype> we would have to do the one below to Convert lowercase y to uppercase Y, by subtracting 32 as lowercase letters are 32 ASCII higher than their uppercase equivalents.
        if (runAgain >= 'a' && runAgain <= 'z')
        { runAgain = runAgain - 32;} */

        cout << endl;

    } while (runAgain == 'Y');

    // Farewell message.
    cout << "Thank you for using the CGPA Calculator." << endl;

    return 0;
}

/*
Function start from here. Note that every function has:

Return type → what it gives back.

Name → how you call it.

Parameters → what data you must enter.

Body → the instructions it runs.

Return statement (if not void)
*/

// This function loads all courses for Freshman Year Semester 1.
void initializeFreshmanSemester1()
{
    // This semester contains 8 courses.
    courseCount = 8;

    // Course 1, array count starts from 0
    courseNames[0] = "Communicative English Language Skills I";
    courseCodes[0] = "FLEn 1111";
    courseTypes[0] = "Common Course";
    creditHours[0] = 3;
    ects[0] = 5;

    // Course 2
    courseNames[1] = "Geography of Ethiopia and the Horn";
    courseCodes[1] = "GeES 1011";
    courseTypes[1] = "Common Course";
    creditHours[1] = 3;
    ects[1] = 5;

    // Course 3
    courseNames[2] = "History of Ethiopia and the Horn";
    courseCodes[2] = "HIST 1012";
    courseTypes[2] = "Common Course";
    creditHours[2] = 3;
    ects[2] = 5;

    // Course 4
    courseNames[3] = "Mathematics for Natural Sciences";
    courseCodes[3] = "Math 1011";
    courseTypes[3] = "Common Course";
    creditHours[3] = 3;
    ects[3] = 5;

    // Course 5
    courseNames[4] = "General Psychology";
    courseCodes[4] = "Psyc1011";
    courseTypes[4] = "Common Course";
    creditHours[4] = 3;
    ects[4] = 5;

    // Course 6
    courseNames[5] = "General Physics";
    courseCodes[5] = "PHYS 1011";
    courseTypes[5] = "Common Course";
    creditHours[5] = 3;
    ects[5] = 5;

    // Course 7
    courseNames[6] = "Critical Thinking";
    courseCodes[6] = "LoCT 1011";
    courseTypes[6] = "Common Course";
    creditHours[6] = 3;
    ects[6] = 5;

    // Course 8
    // Physical Fitness has 0 credit hours,so it does not affect GPA.
    courseNames[7] = "Physical Fitness";
    courseCodes[7] = "SpSc1011";
    courseTypes[7] = "Common Course";
    creditHours[7] = 0;
    ects[7] = 0;
}

// This function loads all courses for Freshman Year Semester 2.
void initializeFreshmanSemester2()
{
    // This semester contains 7 courses.
    courseCount = 7;

    // Course 1
    courseNames[0] = "Communicative English Language Skills II";
    courseCodes[0] = "FLEn 1122";
    courseTypes[0] = "Common Course";
    creditHours[0] = 3;
    ects[0] = 5;

    // Course 2
    courseNames[1] = "General Biology";
    courseCodes[1] = "Biol 1012";
    courseTypes[1] = "Common Course";
    creditHours[1] = 3;
    ects[1] = 5;

    // Course 3
    courseNames[2] = "General Chemistry";
    courseCodes[2] = "Chem 1112";
    courseTypes[2] = "Common Course";
    creditHours[2] = 3;
    ects[2] = 5;

    // Course 4
    courseNames[3] = "Social Anthropology";
    courseCodes[3] = "Anth 1012";
    courseTypes[3] = "Common Course";
    creditHours[3] = 2;
    ects[3] = 4;

    // Course 5
    courseNames[4] = "Moral and Civics Education";
    courseCodes[4] = "MCiE 1012";
    courseTypes[4] = "Common Course";
    creditHours[4] = 2;
    ects[4] = 4;

    // Course 6
    courseNames[5] = "Introduction to Emerging Technologies";
    courseCodes[5] = "EmTe 1012";
    courseTypes[5] = "Common Course";
    creditHours[5] = 3;
    ects[5] = 5;

    // Course 7
    courseNames[6] = "Economics";
    courseCodes[6] = "Econ 1011";
    courseTypes[6] = "Common Course";
    creditHours[6] = 3;
    ects[6] = 5;
}

// This function loads all courses for Sophomore Year Semester 1.
void initializeSophomoreSemester1()
{
    // This semester contains 6 courses.
    courseCount = 6;

    // Course 1
    // Global Trends has 0 credit hours, so it does not affect GPA.
    courseNames[0] = "Global Trends";
    courseCodes[0] = "GlTr-1012";
    courseTypes[0] = "Common Course";
    creditHours[0] = 0;
    ects[0] = 5;

    // Course 2
    courseNames[1] = "Introduction to Computer Science";
    courseCodes[1] = "Comp2011";
    courseTypes[1] = "Supportive";
    creditHours[1] = 3;
    ects[1] = 5;

    // Course 3
    courseNames[2] = "Calculus I";
    courseCodes[2] = "Math 2041";
    courseTypes[2] = "Supportive";
    creditHours[2] = 4;
    ects[2] = 7;

    // Course 4
    courseNames[3] = "Linear Algebra I";
    courseCodes[3] = "Math 2051";
    courseTypes[3] = "Supportive";
    creditHours[3] = 3;
    ects[3] = 5;

    // Course 5
    courseNames[4] = "Microeconomics";
    courseCodes[4] = "Econ 2032";
    courseTypes[4] = "Supportive";
    creditHours[4] = 3;
    ects[4] = 5;

    // Course 6
    courseNames[5] = "Basic Statistics";
    courseCodes[5] = "Stat 2011";
    courseTypes[5] = "Major";
    creditHours[5] = 3;
    ects[5] = 5;
}

// This function loads all courses for Sophomore Year Semester 2.
void initializeSophomoreSemester2()
{
    // This semester contains 6 courses.
    courseCount = 6;

    // Course 1
    courseNames[0] = "Introduction to Probability Theory";
    courseCodes[0] = "Stat 2012";
    courseTypes[0] = "Major";
    creditHours[0] = 3;
    ects[0] = 5;

    // Course 2
    courseNames[1] = "Fundamental Programming";
    courseCodes[1] = "Comp2012";
    courseTypes[1] = "Supportive";
    creditHours[1] = 3;
    ects[1] = 5;

    // Course 3
    courseNames[2] = "Linear Algebra II";
    courseCodes[2] = "Math 2052";
    courseTypes[2] = "Supportive";
    creditHours[2] = 3;
    ects[2] = 5;

    // Course 4
    courseNames[3] = "Statistical Methods";
    courseCodes[3] = "Stat 2013";
    courseTypes[3] = "Major";
    creditHours[3] = 4;
    ects[3] = 7;

    // Course 5
    courseNames[4] = "Calculus for Statistics";
    courseCodes[4] = "Math 2042";
    courseTypes[4] = "Supportive";
    creditHours[4] = 4;
    ects[4] = 7;

    // Course 6
    courseNames[5] = "Macroeconomics";
    courseCodes[5] = "Econ 3033";
    courseTypes[5] = "Supportive";
    creditHours[5] = 3;
    ects[5] = 5;
}

// This function loads all courses for Junior Year Semester 1.
void initializeJuniorSemester1()
{
    // This semester contains 6 courses.
    courseCount = 6;

    // Course 1
    courseNames[0] = "Sampling Theory";
    courseCodes[0] = "Stat 3031";
    courseTypes[0] = "Major";
    creditHours[0] = 4;
    ects[0] = 7;

    // Course 2
    courseNames[1] = "Regression Analysis";
    courseCodes[1] = "Stat 3041";
    courseTypes[1] = "Major";
    creditHours[1] = 3;
    ects[1] = 5;

    // Course 3
    courseNames[2] = "Fundamentals of Database Systems";
    courseCodes[2] = "Comp3021";
    courseTypes[2] = "Supportive";
    creditHours[2] = 3;
    ects[2] = 5;

    // Course 4
    courseNames[3] = "Numerical Methods for Statistics";
    courseCodes[3] = "Math 3062";
    courseTypes[3] = "Supportive";
    creditHours[3] = 3;
    ects[3] = 5;

    // Course 5
    courseNames[4] = "Social and Economic Statistics";
    courseCodes[4] = "Stat 3072";
    courseTypes[4] = "Major";
    creditHours[4] = 3;
    ects[4] = 5;

    // Course 6
    courseNames[5] = "Statistical Computing I";
    courseCodes[5] = "Stat 3021";
    courseTypes[5] = "Major";
    creditHours[5] = 3;
    ects[5] = 5;
}

// This function loads all courses for Junior Year Semester 2.
void initializeJuniorSemester2()
{
    // This semester contains 6 courses.
    courseCount = 6;

    // Course 1
    courseNames[0] = "Research Methods and Sample Survey Practice";
    courseCodes[0] = "Stat 3032";
    courseTypes[0] = "Major";
    creditHours[0] = 3;
    ects[0] = 5;

    // Course 2
    courseNames[1] = "Categorical Data Analysis";
    courseCodes[1] = "Stat 3062";
    courseTypes[1] = "Major";
    creditHours[1] = 3;
    ects[1] = 5;

    // Course 3
    courseNames[2] = "Time Series Analysis";
    courseCodes[2] = "Stat 3042";
    courseTypes[2] = "Major";
    creditHours[2] = 3;
    ects[2] = 5;

    // Course 4
    courseNames[3] = "Design and Analysis of Experiments";
    courseCodes[3] = "Stat 3043";
    courseTypes[3] = "Major";
    creditHours[3] = 4;
    ects[3] = 7;

    // Course 5
    courseNames[4] = "Inclusiveness";
    courseCodes[4] = "SNIE 1012";
    courseTypes[4] = "Common Course";
    creditHours[4] = 2;
    ects[4] = 4;

    // Course 6
    courseNames[5] = "Statistical Computing II";
    courseCodes[5] = "Stat 3022";
    courseTypes[5] = "Major";
    creditHours[5] = 3;
    ects[5] = 5;
}

// This function loads all courses for Senior Year Semester 1.
void initializeSeniorSemester1()
{
    // This semester contains 8 courses.
    courseCount = 8;

    // Course 1
    courseNames[0] = "Project I: Proposal Writing";
    courseCodes[0] = "Stat 4091";
    courseTypes[0] = "Major";
    creditHours[0] = 1;
    ects[0] = 2;

    // Course 2
    courseNames[1] = "Statistical Theory of Distributions";
    courseCodes[1] = "Stat 4051";
    courseTypes[1] = "Major";
    creditHours[1] = 3;
    ects[1] = 5;

    // Course 3
    courseNames[2] = "Entrepreneurship";
    courseCodes[2] = "MGMT 1012";
    courseTypes[2] = "Common Course";
    creditHours[2] = 3;
    ects[2] = 5;

    // Course 4
    courseNames[3] = "Demography";
    courseCodes[3] = "Stat 4071";
    courseTypes[3] = "Major";
    creditHours[3] = 3;
    ects[3] = 5;

    // Course 5
    // Practical Attachments has 0 credit hours,
    // so it does not affect GPA.
    courseNames[4] = "Practical Attachments (Learning from Data)";
    courseCodes[4] = "Stat 4093";
    courseTypes[4] = "Major";
    creditHours[4] = 0;
    ects[4] = 0;

    // Course 6
    courseNames[5] = "Statistical Quality Control";
    courseCodes[5] = "Stat 4081";
    courseTypes[5] = "Major";
    creditHours[5] = 3;
    ects[5] = 5;

    // Course 7
    courseNames[6] = "Applied Spatial Statistics";
    courseCodes[6] = "Stat 4121";
    courseTypes[6] = "Major Elective";
    creditHours[6] = 3;
    ects[6] = 5;

    // Course 8
    courseNames[7] = "Econometrics";
    courseCodes[7] = "Stat 4061";
    courseTypes[7] = "Major";
    creditHours[7] = 3;
    ects[7] = 5;
}

// This function loads all courses for Senior Year Semester 2.
void initializeSeniorSemester2()
{
    // This semester contains 7 courses.
    courseCount = 7;

    // Course 1
    courseNames[0] = "Research Project in Statistics";
    courseCodes[0] = "Stat 4092";
    courseTypes[0] = "Major";
    creditHours[0] = 2;
    ects[0] = 3;

    // Course 2
    courseNames[1] = "Introduction to Multivariate Methods";
    courseCodes[1] = "Stat 4062";
    courseTypes[1] = "Major";
    creditHours[1] = 3;
    ects[1] = 5;

    // Course 3
    courseNames[2] = "Introduction to Data Mining";
    courseCodes[2] = "Stat 4161";
    courseTypes[2] = "Major";
    creditHours[2] = 3;
    ects[2] = 5;

    // Course 4
    // This course has 0 credit hours and does not affect GPA.
    courseNames[3] = "History of Ethiopia and the Horn";
    courseCodes[3] = "HIST 1012";
    courseTypes[3] = "Common Course";
    creditHours[3] = 0;
    ects[3] = 5;

    // Course 5
    courseNames[4] = "Introduction to Statistical Modeling and Simulation";
    courseCodes[4] = "Stat 4142";
    courseTypes[4] = "Major";
    creditHours[4] = 3;
    ects[4] = 5;

    // Course 6
    courseNames[5] = "Operations Research";
    courseCodes[5] = "Stat4111";
    courseTypes[5] = "Major Elective";
    creditHours[5] = 3;
    ects[5] = 5;

    // Course 7
    courseNames[6] = "Statistical Inference";
    courseCodes[6] = "Stat 4052";
    courseTypes[6] = "Major";
    creditHours[6] = 3;
    ects[6] = 5;
}

// This function calculates GPA using:
// GPA = Total Quality Points / Total Credit Hours. Where total quality points is summation of (grade * credit) for all courses in a semester then divide by total credit of the semester.
double calculateGPA(double totalQualityPoints, int totalCredits)
{
    // Prevent division by zero.
    if (totalCredits == 0)
    {
        return 0.0;
    }

    // Return the GPA.
    return totalQualityPoints / totalCredits;
}

// This function calculates CGPA across multiple semesters using the correct credit-weighted formula.
// CGPA = (grandTotalQualityPoints)/(grandTotalCredits)
void calculateMultipleSemesterCGPA()
{
    int numberOfSemesters;
    int semesterChoice;

    // Totals across all selected semesters.
    double grandTotalQualityPoints = 0.0;
    int grandTotalCredits = 0;

    // Variables used for each semester.
    double semesterQualityPoints;
    int semesterCredits;
    double semesterGPA;

    cout << endl;
    cout << "How many semesters do you want to include in this CGPA calculation? ";
    cin >> numberOfSemesters;

    // Validate the number of semesters.
    if (numberOfSemesters < 1 || numberOfSemesters > 8)
    {
        cout << "Please enter a number between 1 and 8." << endl;
        return;
    }

    // Process each semester one at a time.
    for (int s = 1; s <= numberOfSemesters; s++)
    {
        cout << endl;
        cout << "========================================" << endl;
        cout << "Semester " << s << " of " << numberOfSemesters << endl;
        cout << "========================================" << endl;

        // Display the semester menu.
        cout << "Select the semester you want to include:" << endl;
        cout << "1. Freshman Year - Semester 1" << endl;
        cout << "2. Freshman Year - Semester 2" << endl;
        cout << "3. Sophomore Year - Semester 1" << endl;
        cout << "4. Sophomore Year - Semester 2" << endl;
        cout << "5. Junior Year - Semester 1" << endl;
        cout << "6. Junior Year - Semester 2" << endl;
        cout << "7. Senior Year - Semester 1" << endl;
        cout << "8. Senior Year - Semester 2" << endl;
        cout << "Enter your choice (1-8): ";
        cin >> semesterChoice;

        // Keep asking until valid
        while (semesterChoice < 1 || semesterChoice > 8)
        {
            cout << "Invalid choice. Please enter a number between 1 and 8: ";
            cin >> semesterChoice;
        }
        // Load the selected semester template.
        // These templates are reloaded each time, so any modifications are temporary for this calculation only.
        if (semesterChoice == 1)
            initializeFreshmanSemester1();
        else if (semesterChoice == 2)
            initializeFreshmanSemester2();
        else if (semesterChoice == 3)
            initializeSophomoreSemester1();
        else if (semesterChoice == 4)
            initializeSophomoreSemester2();
        else if (semesterChoice == 5)
            initializeJuniorSemester1();
        else if (semesterChoice == 6)
            initializeJuniorSemester2();
        else if (semesterChoice == 7)
            initializeSeniorSemester1();
        else if (semesterChoice == 8)
            initializeSeniorSemester2();

        // Show the default course template.
        cout << endl;
        cout << "========== DEFAULT COURSE LIST ==========" << endl;
        displayCourses();

        // Allow the user to temporarily modify the course list.
        modifyCourses();

        // Show the final course list after modifications.
        cout << endl;
        cout << "========== FINAL COURSE LIST ==========" << endl;
        displayCourses();

        // Reset semester totals.
        semesterQualityPoints = 0.0;
        semesterCredits = 0;

        // Ask for grades and compute semester totals.
        for (int i = 0; i < courseCount; i++)
        {
            double gradePoint;
            int choice;
            int numericScore;
            string letterGrade;

            // Skip zero-credit courses.
            if (creditHours[i] == 0)
            {
                cout << endl;
                cout << courseNames[i]
                     << " (" << courseCodes[i] << ")" << endl;
                cout << "This course has 0 credit hours and will not affect GPA " << endl;
                continue; // tells the loop: skip the rest of this iteration and move on to the next course.
            }

            // Display course information.
            cout << endl;
            cout << courseNames[i]
                 << " (" << courseCodes[i] << ")" << endl;
            cout << "Credit Hours: " << creditHours[i] << endl;

            // Ask how the user wants to enter the grade.
            cout << "How do you want to enter your grade?" << endl;
            cout << "1. Numeric score" << endl;
            cout << "2. Letter grade" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            // Numeric score input.
            if (choice == 1)
            {
                cout << "Enter your score (0 - 100): ";
                cin >> numericScore;
                while (numericScore < 0 || numericScore > 100)
                {
                    cout << "Invalid score. Please enter a value between 0 and 100: ";
                    cin >> numericScore;
                }
                // Convert score to grade point.
                gradePoint = numericToPoint(numericScore);

                // Display equivalent letter grade.
                cout << "Letter Grade: "
                     << numericToLetter(numericScore) << endl;

                // Warn if failed.
                if (gradePoint == 0.0)
                {
                    cout << "You must repeat/add this course next year."
                         << endl;
                }
            }
            // Letter grade input.
            else if (choice == 2)
            {
                cout << "Enter your letter grade: ";
                cin >> letterGrade;
                // Accept only known grades
                while (letterGrade != "A+" && letterGrade != "A" && letterGrade != "A-" &&
                       letterGrade != "B+" && letterGrade != "B" && letterGrade != "B-" &&
                       letterGrade != "C+" && letterGrade != "C" && letterGrade != "C-" &&
                       letterGrade != "D" && letterGrade != "F")
                {
                    cout << "Invalid grade. Please enter a valid grade (A+, A, A-, B+, B, B-, C+, C, C-, D, F): ";
                    cin >> letterGrade;
                }
                // Accepts uppercase and lowercase because letterToPoint() converts to uppercase internally.
                gradePoint = letterToPoint(letterGrade);
            }
            // Invalid input.
            else
            {
                cout << "Invalid choice. Grade will be treated as F."
                     << endl;
                gradePoint = 0.0;
            }

            // Add this course to semester totals.
            semesterQualityPoints =
                semesterQualityPoints +
                (gradePoint * creditHours[i]);

            semesterCredits =
                semesterCredits +
                creditHours[i];

            // Show the grade point used.
            cout << "Grade Point Used: "
                 << gradePoint << endl;
        }

        // Calculate semester GPA.
        semesterGPA =
            calculateGPA(
                semesterQualityPoints,
                semesterCredits);

        // Display this semester's GPA.
        cout << endl;
        cout << "========================================" << endl;
        cout << "Semester " << s
             << " GPA = " << semesterGPA << endl;
        cout << "========================================" << endl;

        // Add semester totals to grand totals.
        grandTotalQualityPoints =
            grandTotalQualityPoints +
            semesterQualityPoints;

        grandTotalCredits =
            grandTotalCredits +
            semesterCredits;
    }
    // Calculate final GPA/CGPA using all selected semesters.
    double cgpa = calculateGPA(grandTotalQualityPoints, grandTotalCredits);

    cout << endl;
    cout << "========================================" << endl;
    if (numberOfSemesters == 1)
        cout << "FINAL GPA = " << cgpa << endl;
    else
        cout << "FINAL CUMULATIVE GPA (CGPA) = " << cgpa << endl;
    cout << "========================================" << endl;
}

/*
This function converts a numeric score (0 to 100) into the corresponding grade point based on our university's grading scale.
Example: score = 95  -> returns 4.0
The function returns a double because grade points can contain decimal values such as 3.75 and 2.75.
*/

double numericToPoint(int score)
{
    // If the score is between 90 and 100,the student gets A+ with 4.0 points.
    if (score >= 90)
        return 4.0;

    // If the score is between 85 and 89,the student gets A with 4.0 points.
    else if (score >= 85)
        return 4.0;

    // If the score is between 80 and 84,the student gets A- with 3.75 points.
    else if (score >= 80)
        return 3.75;

    // If the score is between 75 and 79,the student gets B+ with 3.50 points.
    else if (score >= 75)
        return 3.5;

    // If the score is between 70 and 74,the student gets B with 3.0 points.
    else if (score >= 70)
        return 3.0;

    // If the score is between 65 and 69,the student gets B- with 2.75 points.
    else if (score >= 65)
        return 2.75;

    // If the score is between 60 and 64,the student gets C+ with 2.50 points.
    else if (score >= 60)
        return 2.5;

    // If the score is between 50 and 59,the student gets C with 2.0 points.
    else if (score >= 50)
        return 2.0;

    // If the score is between 45 and 49,the student gets C- with 1.75 points.
    else if (score >= 45)
        return 1.75;

    // If the score is between 40 and 44,the student gets D with 1.0 point.
    else if (score >= 40)
        return 1.0;

    // Any score below 40 is considered F and receives 0.0 grade points and wiil have to repeat/add the course next year.
    else
        return 0.0;
}

/* This function converts a numeric score (0 to 100) into the corresponding letter grade.
Example: score = 95  -> returns "A+"
The function returns a string because letter grades are text values such as "A+", "B-", and "C".*/

string numericToLetter(int score)
{
    // Score 90 to 100 -> A+
    if (score >= 90)
        return "A+";

    // Score 85 to 89 -> A
    else if (score >= 85)
        return "A";

    // Score 80 to 84 -> A-
    else if (score >= 80)
        return "A-";

    // Score 75 to 79 -> B+
    else if (score >= 75)
        return "B+";

    // Score 70 to 74 -> B
    else if (score >= 70)
        return "B";

    // Score 65 to 69 -> B-
    else if (score >= 65)
        return "B-";

    // Score 60 to 64 -> C+
    else if (score >= 60)
        return "C+";

    // Score 50 to 59 -> C
    else if (score >= 50)
        return "C";

    // Score 45 to 49 -> C-
    else if (score >= 45)
        return "C-";

    // Score 40 to 44 -> D
    else if (score >= 40)
        return "D";

    // Score below 40 -> F
    else
        return "F";
}

/* This function converts both small and capital letter grade into the corresponding grade point.
Example: "A+" -> 4.0, "A"  -> 4.0, "A-" -> 3.75
The function returns a double because grade points can contain decimal values.*/

double letterToPoint(string grade)
{
    // Convert lowercase letters to uppercase manually.
    for (int i = 0; i < grade.length(); i++)
    {
        if (grade[i] >= 'a' && grade[i] <= 'z')
        {
            grade[i] = grade[i] - 32; // Convert to uppercase
        }
    }

    // A+ and A
    if (grade == "A+" || grade == "A")
        return 4.0;

    // A-
    else if (grade == "A-")
        return 3.75;

    // B+
    else if (grade == "B+")
        return 3.5;

    // B
    else if (grade == "B")
        return 3.0;

    // B-
    else if (grade == "B-")
        return 2.75;

    // C+
    else if (grade == "C+")
        return 2.5;

    // C
    else if (grade == "C")
        return 2.0;

    // C-
    else if (grade == "C-")
        return 1.75;

    // D
    else if (grade == "D")
        return 1.0;

    // F
    else if (grade == "F")
    {
        cout << "You must repeat/add this course next year." << endl;
        return 0.0;
    }

    // Invalid grade
    else
    {
        cout << "Invalid grade entered." << endl;
        return 0.0;
    }
}

// This function displays all currently loaded courses.
void displayCourses() // Void means function doesn't return value. () means no parameters passed in. The function’s job is simply to print out all the courses currently loaded.
{
    // Print a title.
    cout << endl;
    cout << "================ LOADED COURSES ================" << endl;

    // Loop through all loaded courses.
    // i starts at 0 and continues until i < courseCount. Because arrays start at 0, and let's say we have a coursecount of 8 that mean 0 to 7 in arrays, so i goes from 0 to 7 (it runs 8 times) cause they are all < course count which is 8.
    for (int i = 0; i < courseCount; i++)
    {
        // Display course number (i + 1 makes numbering start at 1 instead of at 0 like the array does. Just for easy understanding).
        cout << i + 1 << ". " << courseNames[i] << endl;

        // Display course code.
        cout << "   Code   : " << courseCodes[i] << endl;

        // Display course type.
        cout << "   Type   : " << courseTypes[i] << endl;

        // Display credit hours.
        cout << "   Credit : " << creditHours[i] << endl;

        // Display ECTS.
        cout << "   ECTS   : " << ects[i] << endl;

        // Print a separator line after each course.
        cout << "-----------------------------------------------" << endl;
    }
}

// This function allows the user to modify the loaded courses.
void modifyCourses()
{
    int choice;

    cout << endl;
    cout << "========================================" << endl;
    cout << "Do you want to modify the course list?" << endl;
    cout << "1. Change credit hours" << endl;
    cout << "2. Add a new course" << endl;
    cout << "3. Remove a course" << endl;
    cout << "4. No changes" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        // logic to change credit hours
        break;
    case 2:
        // logic to add a new course
        break;
    case 3:
        // logic to remove a course
        break;
    case 4:
        cout << "No changes made." << endl;
        break;
    default:
        cout << "Invalid choice. Returning to main menu." << endl;
    }

    // -------------------------------------------------
    // Option 1: Change credit hours
    // -------------------------------------------------
    if (choice == 1)
    {
        int courseNumber;
        int newCredit;

        displayCourses();

        cout << "Enter course number to modify: ";
        cin >> courseNumber;

        // Convert from 1-based numbering to 0-based index.
        courseNumber = courseNumber - 1;

        if (courseNumber >= 0 && courseNumber < courseCount)
        {
            cout << "Enter new credit hours: ";
            cin >> newCredit;

            // Update the selected course.
            creditHours[courseNumber] = newCredit;

            // Confirmation message.
            cout << endl;
            cout << "Credit hours updated successfully." << endl;
        }
        else
        {
            cout << endl;
            cout << "Invalid course number." << endl;
        }
    }

    // -------------------------------------------------
    // Option 2: Add a new course
    // -------------------------------------------------
    else if (choice == 2)
    {
        if (courseCount >= MAX_COURSES)
        {
            cout << endl;
            cout << "Cannot add more courses." << endl;
            return;
        }

        int i = courseCount;

        // Clear leftover newline from previous cin.
        cin.ignore(10000, '\n');

        cout << "Enter course name: ";
        getline(cin, courseNames[i]);

        cout << "Enter course code: ";
        getline(cin, courseCodes[i]);

        cout << "Enter course type: ";
        getline(cin, courseTypes[i]);

        cout << "Enter credit hours: ";
        cin >> creditHours[i];

        cout << "Enter ECTS: ";
        cin >> ects[i];

        // Increase course count.
        courseCount++;

        // Confirmation message.
        cout << endl;
        cout << "Course added successfully." << endl;
    }

    // -------------------------------------------------
    // Option 3: Remove a course
    // -------------------------------------------------
    else if (choice == 3)
    {
        int courseNumber;

        displayCourses();

        cout << "Enter course number to remove: ";
        cin >> courseNumber;

        // Convert to array index.
        courseNumber = courseNumber - 1;

        if (courseNumber >= 0 && courseNumber < courseCount)
        {
            // Shift remaining courses left.
            for (int i = courseNumber; i < courseCount - 1; i++)
            {
                courseNames[i] = courseNames[i + 1];
                courseCodes[i] = courseCodes[i + 1];
                courseTypes[i] = courseTypes[i + 1];
                creditHours[i] = creditHours[i + 1];
                ects[i] = ects[i + 1];
            }

            // Reduce total number of courses.
            courseCount--;

            // Confirmation message.
            cout << endl;
            cout << "Course removed successfully." << endl;
        }
        else
        {
            cout << endl;
            cout << "Invalid course number." << endl;
        }
    }

    // -------------------------------------------------
    // Option 4: No changes
    // -------------------------------------------------
    else if (choice == 4)
    {
        cout << endl;
        cout << "No changes made." << endl;
    }

    // -------------------------------------------------
    // Invalid menu choice
    // -------------------------------------------------
    else
    {
        cout << endl;
        cout << "Invalid choice. No changes made." << endl;
    }
}
