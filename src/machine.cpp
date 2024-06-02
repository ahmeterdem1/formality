//
// Created by AHMET ERDEM on 2.06.2024.
//

#include "../include/machine.h"

DFA::DFA(std::string __name) {
    this->name = __name;
}

void DFA::addState(State state) {
    this->states.push_back(state);
}

void DFA::setBeginState(State state) {
    this->begin = state;
    this->current = state;
    this->states.push_back(state);
}

void DFA::setEndState(State state) {
    this->end = state;
    this->states.push_back(state);
}

State DFA::getBeginState() const {
    return this->begin;
}

State DFA::getEndState() const {
    return this->end;
}

void DFA::addTransition(Transition t) {
    this->transitions.push_back(t);
}

void DFA::removeTransition(Transition __t) {

    for (int i = 0; i < this->transitions.size(); i++) {
        if (__t == this->transitions[i]) {
            this->transitions.erase(this->transitions.begin() + i);
            break;
        }
    }
}

void DFA::removeTransition(std::string label) {
    for (int i = 0; i < this->transitions.size(); i++) {
        if (label == this->transitions[i].getLabel()) {
            this->transitions.erase(this->transitions.begin() + i);
            break;
        }
    }
}

bool DFA::run(std::string text) const {
    std::string buffer;

    for (char c : text) {
        buffer += c;
        for (Transition t : this->transitions) {  // This can be optimized via matching states and transitions
            if (t.getLabel() == buffer && t.getFromState() == this->current) {
                this->current = t.getToState();
                buffer.clear();
                break;
            }
        }
    }

    bool result = ((this->current == this->end) && buffer.empty());
    this->current = this->begin;
    return result;
}
