//
#include <TFile.h>

void file_closer(TFile * fp) {
    printf("Closing file %s\n", fp->GetName());
    fp->Close();
    delete fp;
};

int main() {
    TFile * f = TFile::Open("test.txt", "recreate");
    file_closer(f);
}
