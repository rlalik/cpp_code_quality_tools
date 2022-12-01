// no header

class Example {
private:
    int * arr;
public:
    Example(int s) {
        arr = new int[s];
    }
    ~Example() {
        delete [] arr;
    }
};

int main() {
    Example ex(10);
}
