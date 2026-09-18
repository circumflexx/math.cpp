template <typename t>
auto aprogressionsum2(t a1, t d, int n) {
    if (n <= 0) return 0.0;
    return static_cast<double>(n) * (2.0 * static_cast<double>(a1) + (n - 1) * static_cast<double>(d)) / 2.0;
}
