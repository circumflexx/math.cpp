template <typename t>
auto aprogressionterm2(t a1, t a2, int n) {
    if (n <= 0) return 0.0;
    double d = static_cast<double>(a2) - static_cast<double>(a1);
    return static_cast<double>(a1) + (n - 1) * d;
}
