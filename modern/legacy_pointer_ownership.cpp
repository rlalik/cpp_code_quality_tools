//
class Example {
private:
    int * var;
public:
    Example() : var(new int) { *var = 10; }
    virtual ~Example() { delete var; }
    int * GetVar() {
        return var;     // ownership not passed
    }
    int * CloneVar() {  // ownership passed
        int * _v = new int;
        *_v = *var;
        return _v;
    }
    void Set(int * a) { *var = *a; }
};

int main() {
    Example e;
    int * a = e.GetVar();
    // delete a; // this will for sure make troubles
    int aaa = 10;
    e.Set(&aaa); // in this line

    for (int i = 0; i < 10; ++i) {
        int * b = e.CloneVar();
        /* delete b; */ // !! no delete, memory leak
    } // exercise -- test it with Leak Sanitizer
    return 0;
}
