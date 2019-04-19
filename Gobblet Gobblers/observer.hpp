//
//  subject.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 18/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef observer_hpp
#define observer_hpp

#include "event.hpp"


class Observer {
public:
    virtual void notify(Event event) = 0;
    
};

#endif
