template <typename t>
auto aprogressionsum1(t a1, t an, int n) {
    if (n <= 0) return 0.0;
    return static_cast<double>(n) * (static_cast<double>(a1) + static_cast<double>(an)) / 2.0;
}
