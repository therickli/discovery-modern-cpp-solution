#include <fstream>
#include <iostream>

int main() {
  std::cout << "What is your age?";
  int age;
  std::cin >> age;
  std::ofstream outfile("age.txt");
  outfile << age;
  return 0;
}