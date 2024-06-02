//
// Created by AHMET ERDEM on 2.06.2024.
//

#include "../include/state.h"

State::State(std::string __name, bool __final) {
    this->name = __name;
    this->final = __final;
}

std::string State::getName() const {
    return this->name;
}

bool State::isFinal() const {
    return this->final;
}

bool State::operator==(State other) const {
    return (this->name == other.name) && (this->final == other.final);
}
