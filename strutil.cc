#include "strutil.h"

namespace strutil {

std::vector<std::string_view> splitSV(const std::string& str, const std::string& delims) {
    auto svStr = std::string_view(str);
    auto svDelims = std::string_view(delims);
    return splitSV(svStr, svDelims);
}

std::vector<std::string_view> splitSV(std::string_view strv, std::string_view delims) {
    std::vector<std::string_view> output;
    size_t first = 0;

    while (first < strv.size()) {
        const auto second = strv.find_first_of(delims, first);
        if (first != second) {
            output.emplace_back(strv.substr(first, second - first));
        }

        if (second == std::string_view::npos) {
            break;
        }

        first = second + 1;
    }

    return output;
}

}
