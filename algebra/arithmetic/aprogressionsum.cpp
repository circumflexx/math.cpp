template <typename T>
auto aprogressionsum1(T a1, T an, int n) {
    if (n <= 0) return 0.0;
    return static_cast<double>(n) * (static_cast<double>(a1) + static_cast<double>(an)) / 2.0;
}

template <typename T>
auto aprogressionsum2(T a1, T d, int n) {
    if (n <= 0) return 0.0;
    return static_cast<double>(n) * (2.0 * static_cast<double>(a1) + (n - 1) * static_cast<double>(d)) / 2.0;
}
