//
// Created by AHMET ERDEM on 2.06.2024.
//

#ifndef FORMALITY_MACHINE_H
#define FORMALITY_MACHINE_H

#include "transition.h"
#include "state.h"

#include <vector>

class DFA {

private:
    std::string name;
    std::vector<State> states;
    std::vector<Transition> transitions;
    State begin;
    State end;
    State current;

public:
    DFA() = default;
    DFA(std::string __name);

    void addState(State __state);
    void setBeginState(State __state);
    void setEndState(State __state);

    State getBeginState() const;
    State getEndState() const;

    void addTransition(Transition __t);
    void removeTransition(std::string __label);
    void removeTransition(Transition __t);

    bool run(std::string text) const;

};

#endif //FORMALITY_MACHINE_H
