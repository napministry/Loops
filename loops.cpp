#include <iostream>

using namespace std;

double calculateCommission(double sales, double commissionRate) {
  return sales * commissionRate;
}

void calculateCommissionSingleSale() {
  double commissionRate = 0.2; // 20%
  double sales, commission;

  cout << "Enter the salesperson's sales: ";
  cin >> sales;

  commission = calculateCommission(sales, commissionRate);

  cout << "The commission is: $" << fixed << setprecision(2) << commission << endl;
}

void calculateCommissionLoop() {
  double commissionRate = 0.2; // 20%
  double sales, commission;

  do {
    cout << "Enter the salesperson's sales (-1 to quit): ";
    cin >> sales;

    if (sales != -1) {
      commission = calculateCommission(sales, commissionRate);
      cout << "The commission is: $" << fixed << setprecision(2) << commission << endl;
    }
  } while (sales != -1);
}

int main() {
  int choice;

  cout << "Choose an option:\n";
  cout << "1. Calculate commission for one sale\n";
  cout << "2. Calculate commission for multiple sales (until -1 is entered)\n";
  cout << "Enter your choice: ";
  cin >> choice;

  if (choice == 1) {
    calculateCommissionSingleSale();
  } else if (choice == 2) {
    calculateCommissionLoop();
  } else {
    cout << "Invalid choice.\n";
  }

  return 0;
}