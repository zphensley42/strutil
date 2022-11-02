#include "strutil.h"
#include <cassert>

int main() {
    {
        std::string toSplit = "left shift+left alt+1";
        auto split = strutil::sv::splitSV(toSplit, "+");
        assert(!split.empty());
        assert(split.at(0) == "left shift");
        assert(split.at(1) == "left alt");
        assert(split.at(2) == "1");
    }

    {
        std::string_view toSplit = "left shift+left alt+1";
        auto split = strutil::sv::splitSV(toSplit, std::string_view("+"));
        assert(!split.empty());
        assert(split.at(0) == "left shift");
        assert(split.at(1) == "left alt");
        assert(split.at(2) == "1");
    }

    {
        std::string toSplit = "left shift+left alt+1";
        auto split = strutil::ss::splitSV(toSplit, "+");
        assert(!split.empty());
        assert(split.at(0) == "left shift");
        assert(split.at(1) == "left alt");
        assert(split.at(2) == "1");
    }
}