#include "service/Consumer.h"
#include <time.h>


int main() {
    srand(time(NULL));

    int n = 5;
    Consumer consumers[n];

    while (true) {
        for(int i = 0; i < n; i++)
            consumers[i].consume();
    }
}
