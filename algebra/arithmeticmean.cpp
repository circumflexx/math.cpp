#include <vector>
template <typename t>
auto arithmeticmean(const std::vector<t>& m) {
    if (m.empty()) return double{0};
    double s = 0;
    for (const t& x : m) {
        s += x;
    }
    return s / static_cast<double>(m.size());
}
