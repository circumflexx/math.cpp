#include <vector>
template <typename T>
auto arithmeticmean(const std::vector<T>& m) {
    if (m.empty()) return double{0};
    double s = 0;
    for (const T& x : m) {
        s += x;
    }
    return s / static_cast<double>(m.size());
}
