# Formality

An automata simulator for formal languages.

## Project Details

This is a library to simulate state machines for recognizing formal
languages. Currently, you can only create simulators for DFA's. 

General usage goes first by creating a machine. States are generated
and added to the machine. Name of states have no functional usage
in the code. Same goes for the "final" tag of the state.

Transitions are then added to the machine. Label of the transitions
govern which substring is required to be recognized to perform the
transition. 

No matter what you add, the machine behaves deterministically. This
is because transitions are looped through at each iteration, the
first matching one is the one that is used always.

An example usage can be found in the "main.cpp" file. The library
is not complete by any means.
