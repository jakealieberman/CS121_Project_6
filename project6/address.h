#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip; // keep as string to preserve leading zeros

public:
    Address();
    void init(const std::string& streetIn,
              const std::string& cityIn,
              const std::string& stateIn,
              const std::string& zipIn);
    void printAddress() const; // two lines: street\ncity state, zip
};

#endif // ADDRESS_H