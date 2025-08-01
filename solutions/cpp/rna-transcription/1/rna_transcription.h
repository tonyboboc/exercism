#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H
#include <iostream>
#include <string>
#include<iterator>
namespace rna_transcription {
char to_rna(char s);

std::string to_rna(std::string s);
}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H