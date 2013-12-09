#include <iostream>


int main()
{
   const int CUST_COUNT = 10;

   // Customer[x][0] holds the customer number
   // Customer[x][1] holds the amount eaten
   // I don't know if I can keep the customer number - amount eaten
   // association with a single dimension array so I did it like this.
   // I think vectors would have made this a lot easier but the exercise
   // calls for arrays, and I haven't delved much into the STL yet.
   int Customers[CUST_COUNT][2] = { {0} };

   for (int x = 0; x < CUST_COUNT; ++x) {
      Customers[x][0] = (x + 1);
      std::cout << "Enter the amount eaten for customer " << (x + 1) << " : ";
      std::cin >> Customers[x][1];
   }

   // Horrific modification of the Insertion Sort algorithm
   int i, j, custNo, custPans;

   for (i = 1; i < CUST_COUNT; ++i) {
      j = i;

      while ((Customers[j][1] > 0) && (Customers[j - 1][1] < Customers[j][1])) {
         // Set current data to temporary variable
         custNo = Customers[j][0];
         custPans = Customers[j][1];

         // Swap values
         Customers[j][0] = Customers[j - 1][0];
         Customers[j][1] = Customers[j - 1][1];

         Customers[j - 1][0] = custNo;
         Customers[j - 1][1] = custPans;

         --j;
      }
   }

   std::cout << std::endl;

   for (int x = 0; x < CUST_COUNT; ++x) {
      std::cout << "Customer " << Customers[x][0] << " ate "
                << Customers[x][1] << " pancakes.\n";
   }

   std::cout << std::endl;
   std::cout << "Customer " << Customers[0][0] << " ate the most pancakes, "
             "with " << Customers[0][1] << " pancakes eaten.\n";
   std::cout << "Customer " << Customers[CUST_COUNT - 1][0] << " ate the least "
             " amount of pancakes, with only " << Customers[CUST_COUNT - 1][1]
             << " eaten." << std::endl;

   return 0;
}
