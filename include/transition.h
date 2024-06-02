//
// Created by AHMET ERDEM on 2.06.2024.
//

#ifndef FORMALITY_TRANSITION_H
#define FORMALITY_TRANSITION_H

#include "state.h"
#include <string>

class Transition {
protected:
    std::string label;
    State from;
    State to;

public:
    Transition() = default;

    Transition(std::string __label, State __from, State __to);

    std::string getLabel() const;
    State getFromState() const;
    State getToState() const;

    bool operator== (Transition other) const;
};

#endif //FORMALITY_TRANSITION_H
