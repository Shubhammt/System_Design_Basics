// Used for caching, Pre-Post processing
// Access Restriction

#include "proxy.h"

int main(){
    child c;
    c.function(5);
    proxy p(c);
    p.function(-4);
    return 0;
}