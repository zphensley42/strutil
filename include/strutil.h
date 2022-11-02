#ifndef GWIDI_MIDI_PARSER_STRUTIL_H
#define GWIDI_MIDI_PARSER_STRUTIL_H

#include <vector>
#include <string>
#include <string_view>

namespace strutil {

std::vector<std::string_view> splitSV(const std::string& str, const std::string& delims = " ");
std::vector<std::string_view> splitSV(std::string_view strv, std::string_view delims = " ");

}

#endif //GWIDI_MIDI_PARSER_STRUTIL_H
