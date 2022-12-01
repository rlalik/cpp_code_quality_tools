//

int* make_array_of_values(int s, int v) {
    int* arr = new int[s];
    for (int i = 0; i < s; ++i)
        arr[i] = v;
    return arr;
}

int main() {
    int* a = make_array_of_values(10, 13);    
}
