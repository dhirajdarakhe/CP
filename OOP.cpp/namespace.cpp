
#include <iostream>
using namespace std;

// first name space
namespace first_space {
   void func() {
      cout << "Inside first_space" << endl;
   }
}

// second name space
namespace second_space {
   void func() {
      cout << "Inside second_space" << endl;
   }
}

int main () {
   // Calls function from first name space.
   first_space::func();
   
   // Calls function from second name space.
   second_space::func(); 

   return 0;
}


// cout, endl are present in more than one header file
// but we want to use cout and endl which is in under std namespace
