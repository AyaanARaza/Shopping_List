#include <iostream>

int main() {
  std::cout << "Welcome to Shop Sim!\n";
  std::cout << "What is your budget\n";
  int budget;
  std::cin >> budget;
  int list_for_shopping[3] = {0, 0, 0};
  while (true) {
    std::cout << "What would you like to buy?\n";
    std::cout << "1. Bread - $2\n";
    std::cout << "2. Milk - $3\n";
    std::cout << "3. Eggs - $4\n";
    std::cout << "4. Exit\n";
    int choice;
    std::cin >> choice;
    if (choice == 1) {
      if (budget >= 2) {
        std::cout << "You bought bread\n";
        budget -= 2;
        std::cout << "You have $" << budget << " left\n";
        list_for_shopping[0] += 1;
      } else {
        std::cout << "You don't have enough money\n";
      }
    } else if (choice == 2) {
      if (budget >= 3) {
        std::cout << "You bought milk\n";
        budget -= 3;
        std::cout << "You have $" << budget << " left\n";
        list_for_shopping[1] += 1;
      } else {
        std::cout << "You don't have enough money\n";
      }
    } else if (choice == 3) {
      if (budget >= 4) {
        std::cout << "You bought eggs\n";
        budget -= 4;
        std::cout << "You have $" << budget << " left\n";
        list_for_shopping[2] += 1;
      } else {
        std::cout << "You don't have enough money\n";
      }
    } else if (choice == 4) {
      std::cout << "Thank you for shopping!\n";
      break;
    } else {
      std::cout << "Invalid choice\n";
    }
  }
  std::cout << "\033c";
  int total = list_for_shopping[0] * 2 + list_for_shopping[1] * 3 +
              list_for_shopping[2] * 4;
  std::cout << "You bought " << list_for_shopping[0] << " bread\n";
  std::cout << "You bought " << list_for_shopping[1] << " milk\n";
  std::cout << "You bought " << list_for_shopping[2] << " eggs\n";
  std::cout << "You spent $" << total << "\n";
  std::cout << "You have $" << budget << " left\n";
}