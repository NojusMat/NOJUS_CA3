//
// Created by wwwno on 27/03/2023.
//

#include "Bug.h"
#include <iostream>
#include <string>

using namespace std;

Bug::~Bug() { cout << "~Bug() called. The ShaBugpe base destructor is called after derived destructor.\n"; }
