//
// Created by AHMET ERDEM on 2.06.2024.
//

#ifndef FORMALITY_STATE_H
#define FORMALITY_STATE_H

#include <string>
#include <vector>

class State {
protected:
    std::string name;
    bool final;  // This is for labeling purposes, for now at least. Has no real effective code usage except ==.

public:
    State() = default;

    State(std::string __name, bool __final = false);
    std::string getName() const;
    bool isFinal() const;
    bool operator== (State other) const;
};

#endif //FORMALITY_STATE_H
