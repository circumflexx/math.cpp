#include <vector>
template <typename t>
double arithmeticmean(const std::vector<t>& m) {
    if (m.empty()) return 0.0;
    double s = 0.0;
    for (t x : m) {
        s += x;
    }
    return s / m.size();
}
