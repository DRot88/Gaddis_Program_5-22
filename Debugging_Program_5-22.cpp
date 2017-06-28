//This program attempts to average 2 test scores for each student in a class.

#include <iostream>
#include <string>
#include <iomanip>

int main() {
  std::string name;            // Student first name

  int count = 1,          // Student counter
      score,              // Individual score read in
      totalScore = 0;     // Total of a studnet's 2 scores
  double average;         // Average of a studnets 2 scores

  std::cout << std::fixed << std::showpoint << std::setprecision(1);
  std::cout << "Enter the first name of student " << count
       << " (or Q to quit): ";
  std::cin >> name;

  while (name != "Q" && name != "q") {
    // Get and validate the first score
    std::cout << "Enter score 1: ";
    std::cin >> score;
    if (score <= 0 || score >= 100) {
      std::cout << "Score must be between 0 and 100. Please reenter: ";
      std::cin >> score;   
    }
    totalScore += score;    // Add the first score onto the total

    // Get and validate the second score
    std::cout << "Enter score 2: ";
    std::cin >> score;
    if (score <= 0 || score >= 100) {
      std::cout << "Score must be between 0 and 100. Please reenter: ";
      std::cin >> score;
    }
    totalScore += score;    // Add the second score onto the total

    // Calculate and print average
    average = totalScore / 2;
    std::cout << name << std::setw(6) << average << std::endl;

    // Get the next student name
    std::cout << "Enter the first name of student " << count++
              << " (or Q to quit): ";
    std::cin >> name;
  }
  return 0;
}