#include "address.h"
#include <iostream>

Address::Address() : street(""), city(""), state(""), zip("") {}

void Address::init(const std::string& streetIn,
                   const std::string& cityIn,
                   const std::string& stateIn,
                   const std::string& zipIn) {
    street = streetIn;
    city   = cityIn;
    state  = stateIn;
    zip    = zipIn;
}

void Address::printAddress() const {
    std::cout << street << std::endl;
    std::cout << city << " " << state << ", " << zip << std::endl;
}