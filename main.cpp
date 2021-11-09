#include "service/Consumer.h"
#include <time.h>
#include <thread>
#include <chrono>

int main() {
    srand(time(NULL));

    int n = 5;
    Consumer consumers[n];

    while (true) {
        for (int i = 0; i < n; i++)
            consumers[i].consume();

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}
