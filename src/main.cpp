///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Author: Aleksander M. Pasiut
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

#include <capd/capdlib.h>
#include <capd/mpcapdlib.h>

int main()
{
    std::cout << "Hello world!\n";

    using namespace capd;

    {
        IMatrix mat = IMatrix::Identity(3);
        std::cout << mat << '\n';
    }

    #ifdef __HAVE_MPFR__

    {
        MpIMatrix mat = MpIMatrix::Identity(4);
        std::cout << mat << '\n';
    }

    #endif
    
    return 0;
}
