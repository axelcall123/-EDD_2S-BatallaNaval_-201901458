#include <iostream>
#include "hpp/shaDCS.hpp"
// 256
#include "extras/SHA256.cpp"
using namespace std;
string shadcsH::codificado(string pass)
{
    SHA256 sha;
    sha.update(pass); // CONVIRTE 256->RETURN{VAR}
    uint8_t *digest = sha.digest();
    string s = SHA256::toString(digest);
    delete[] digest;
    return s;
};
