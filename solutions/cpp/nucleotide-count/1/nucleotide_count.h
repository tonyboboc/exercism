#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H
#include <map>
#include<algorithm>
#include <string>
#include <stdexcept>
namespace nucleotide_count {
std::map<char,int>  count(std::string s);
}  // namespace nucleotide_count

#endif // NUCLEOTIDE_COUNT_H