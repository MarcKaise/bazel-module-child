#include <iostream>

#include "hellojp.h"
#include "helloen.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "main" << endl;

    HelloJp hj;
    hj.hello();

    HelloEn he;
    he.hello();

    return 0;
}
