int main() {
    int arr[10] = { 0 };

    arr[10] = 13;

    for (int i = 0; i < 11; ++i) {
        arr[i] = 2;
    }
}
