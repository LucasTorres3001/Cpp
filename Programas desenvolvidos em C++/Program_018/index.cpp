#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<short>jk{3,9,27,81,243};

    for_each(jk.begin(),jk.end(),[](short jk){
        cout << " \n" <<  jk << "\n";
    });


    return 0;
}
