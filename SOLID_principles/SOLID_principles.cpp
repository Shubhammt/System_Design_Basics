#include "Liskov_substitution.h"








int main() {
    // Single Responsiblity
    animal A(4, "Cow");
    farm f(A, 10);
    cout<<f.get_type()<<endl;

    // Open for extension, closed for modification
    print_type_1 P_1(f);
    P_1.get_data();

    print_type_2 P_2(f);
    P_2.get_data();

    // Liskov substituion priciple
    vehicle v;
    car c;
    cycle cy;
    getengine(v);
    getengine(c);
    getengine(cy); // return incorrect output

    return 0;
}