//
// Created by AHMET ERDEM on 2.06.2024.
//

#include "../include/transition.h"

Transition::Transition(std::string __label, State __from, State __to) {
    this->label = __label;
    this->from = __from;
    this->to = __to;
}

std::string Transition::getLabel() const {
    return this->label;
}

State Transition::getFromState() const {
    return this->from;
}

State Transition::getToState() const {
    return this->to;
}

bool Transition::operator==(Transition other) const {
    return (this->label == other.label) && (this->from == other.from) && (this->to == other.to);
}

