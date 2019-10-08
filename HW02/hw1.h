#ifdef GETID_HPP_
#define GETID_HPP_

#include<string>
#include<sstream>

int getIdfromFile(std::string filename, std::istringstream & is, std::ostringstream & os);

void numberChase(std::string filename, std::ostringstream & os);

#endif // GETID_HPP_
