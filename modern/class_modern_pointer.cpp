#include <memory>

class Example {
private:
    std::unique_ptr<int[]> arr;
public:
    Example(int s) {
        arr = std::make_unique<int[]>(10);
    }
};
 
int main() {
    Example ex(10);
}
