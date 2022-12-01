#include<memory>

auto make_array_of_values(int s, int v) {
    auto arr = std::make_unique<int[]>(s);
    for (int i = 0; i < s; ++i)
        arr[i] = v;
    return arr;
}

int main() {
    auto a = make_array_of_values(10, 13);
}
