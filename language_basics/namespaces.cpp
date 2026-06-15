# include <iostream>

namespace first{
    int x = 1; 
}

namespace second{
    int x = 3; 
}

int main() {
    // namespace gives a solution to prevent name conflicts 
    // each entity needs a unique name. It allows identically names entities as long as namespaces are different 
    
    //int x = 0; 
    using namespace second;
    using std::cout;

    cout << x; 
    return 0 ;
}