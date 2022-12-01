#include<memory>
#include <TFile.h>

struct file_closer {
    void operator()(TFile * fp) {
        printf("Closing file %s\n", fp->GetName());
        fp->Close();
        delete fp;
    }
};

int main() {
    auto f = std::unique_ptr<TFile, file_closer>(TFile::Open("test.txt", "recreate"));
}
