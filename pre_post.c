#include <stdio.h>

int main(int argc, char* argv[]) {
    int x = 10;

    [[maybe_unused]] int y = ++x;
    [[maybe_unused]] int z = x++;

    return 0;
}