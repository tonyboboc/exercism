#if !defined(BEER_SONG_H)
#define BEER_SONG_H
#include <string>
#include <sstream>
namespace beer_song {
std::string verse (int number);
std::string sing(int bottle1,int bottle2=0);
}  // namespace beer_song

#endif // BEER_SONG_H