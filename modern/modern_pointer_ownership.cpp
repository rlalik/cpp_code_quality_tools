#include <memory>
class Example {
private:
    std::unique_ptr<int> var;
public:
    Example() : var(std::make_unique<int>(10)) { }
    virtual ~Example() = default;
    int * GetVar() {
        return var.get();   // ownership not passed
    }
    auto CloneVar() {       // ownership passed
        return std::make_unique<int>(*var);
    }
    void Set(int * a) { *var = *a; }
};

int main() {
    Example e;
    auto a = e.GetVar();

    int aaa = 10;
    e.Set(&aaa);
    for (int i = 0; i < 10; ++i) {
        auto b = e.CloneVar();
        // no need for delete,
        // b will be destroyed after end of scope
    }
}
