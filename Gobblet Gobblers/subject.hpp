//
//  subject.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 18/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef subject_hpp
#define subject_hpp

#include "event.hpp"
#include "observer.hpp"
#include <vector>

class Subject {
private:
    std::vector<Observer *> observers;
    
public:
    void notifyObservers(Event event) {
        for (Observer *o: observers) {
            o->notify(event);
        }
    }
    
    void Subscribe(Observer *o) {
        observers.emplace_back(o);
    }
    
    virtual ~Subject() = 0;
    
    
};

#endif /* subject_hpp */
