//
// Created by AHMET ERDEM on 2.06.2024.
//
#include <iostream>
#include "formality.h"

int main() {

    DFA dfa("My First DFA");

    State q0("Initial");
    State q1("In between");
    State q2("Final", true);

    dfa.setBeginState(q0);
    dfa.addState(q1);
    dfa.setEndState(q2);

    Transition t0_0("a", q0, q1);
    Transition t1_0("a", q1, q2);
    Transition t2_0("b", q2, q1);
    Transition t1_1("b", q1, q0);

    dfa.addTransition(t0_0);
    dfa.addTransition(t1_0);
    dfa.addTransition(t2_0);
    dfa.addTransition(t1_1);

    // The represented language is 'aa[(bbaa)(ba)]*' in regex

    std::string example1 = "aabbaa";  // accept
    std::string example2 = "aaba";  // accept
    std::string example3;           // don't accept
    std::string example4 = "aabb";  // don't accept
    std::string example5 = "aa";    // accept
    std::string example6 = "abbbbb";  // don't accept

    std::cout << dfa.run(example1) << std::endl;
    std::cout << dfa.run(example2) << std::endl;
    std::cout << dfa.run(example3) << std::endl;
    std::cout << dfa.run(example4) << std::endl;
    std::cout << dfa.run(example5) << std::endl;
    std::cout << dfa.run(example6) << std::endl;
    return 0;
}