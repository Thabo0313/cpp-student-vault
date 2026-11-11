/*
 * OOP Student Grade Vault (CPE-20-01 Portfolio Artifact)
 * Demonstrates Encapsulation, Constructors, std::vector, and const correctness.
 */

#include <iostream>
#include <string>
#include <vector>

class StudentRecord {
private:
    // Encapsulated attributes: inaccessible directly from outside the class
    std::string studentName;
    std::string moduleCode;
    std::vector<double> assessmentScores;

public:
    // Parameterized Constructor using a Member Initializer List
    StudentRecord(std::string name, std::string code, std::vector<double> scores)
        : studentName(name), moduleCode(code), assessmentScores(scores) {}

    // Method to safely append a new assessment score to the private vector
    void addScore(double newScore) {
        if (newScore >= 0.0 && newScore <= 100.0) {
            assessmentScores.push_back(newScore);
        }
    }

    // Read-only ('const') method that calculates the arithmetic mean of scores
    double calculateAverage() const {
        if (assessmentScores.empty()) {
            return 0.0;
        }

        double totalSum = 0.0;
        // Range-based for loop iterating through the STL vector
        for (double score : assessmentScores) {
            totalSum += score;
        }

        return totalSum / assessmentScores.size();
    }

    // Read-only ('const') method to format and output the student transcript
    void printTranscript() const {
        double finalAverage = calculateAverage();
        // Ternary operator determines certification clearance status
        std::string clearanceStatus = (finalAverage >= 70.0) ? "CERTIFIED PASS" : "RETAKE REQUIRED";

        std::cout << "========================================" << std::endl;
        std::cout << "Student Name : " << studentName << std::endl;
        std::cout << "Module Track : " << moduleCode << std::endl;
        std::cout << "Assessments  : " << assessmentScores.size() << " recorded" << std::endl;
        std::cout << "Final Average: " << finalAverage << "%" << std::endl;
        std::cout << "Exam Status  : " << clearanceStatus << std::endl;
        std::cout << "========================================" << std::endl;
    }
};

int main() {
    // Instantiate an object of StudentRecord with initial test scores
    StudentRecord candidate("Thabo", "CPE-20-01 (C++ Essentials)", {78.5, 82.0, 91.0});

    // Safely mutate internal state via a public setter method
    candidate.addScore(74.5);

    // Output the formatted transcript to the console
    candidate.printTranscript();

    return 0;
}