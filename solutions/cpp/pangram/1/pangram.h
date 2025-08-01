#if !defined(PANGRAM_H)
#define PANGRAM_H
#include <algorithm>
#include <string>
#include <cctype>
namespace pangram {
bool is_pangram(std::string s);
}  // namespace pangram

#endif // PANGRAM_H