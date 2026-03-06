#pragma once
#include <string>
#include <string_view>
namespace run_length_encoding {
std::string encode (std::string_view s);
std::string decode (std::string_view s);
// TODO: add your solution here

}  // namespace run_length_encoding
