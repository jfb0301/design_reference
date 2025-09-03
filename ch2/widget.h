#include <algorithm>
#include <ostream>


    /*/
        The implementation of swap() doesn't fulfill the expectations of a swap() function 
    */

struct Widget {
    int i;
    int j; 
};

// CUSTOM operator<<

std::ostream& operator<<(std::ostream& os, const Widget& w) {
    os << "Widget{i=" << w.i << ", j=" << w.j << "}";
    return os;
}

void swap( Widget& w1, Widget& w2)
{
    using std::swap;
    swap( w1.i, w2.i);
    swap( w1.j, w2.j ); 
}



