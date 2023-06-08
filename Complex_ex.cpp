#include "Complex_ex.hpp"
#include <iostream>
using namespace std;

int Complex_class::set_parm(double num1, double num2)
{
    re = num1;
    im = num2;
    return 0;
}
void Complex_class::display()
{
    cout << "real number " << re << "\n"
         << "image number " << im << endl;
}
/*define constructor  set number real and image
 */
Complex_class ::Complex_class() : re(0), im(0) // define at defult zero number image and real number
{

    // set_parm(5.2, 5.3);
    cout << "inistion"
         << "real number " << re << "\n"
         << "image number " << im << endl;
}
