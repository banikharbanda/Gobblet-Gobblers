//
//  main.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 17/02/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include <iostream>
#include "controller.hpp"
#include <string>

int main(int argc, const char * argv[]) {
    Controller c("Red", "Blue", 3);
    c.play();
    return 0;
}
