#include <iostream>
int find_layer(int num, int * layer) {
    int i = 1;
    int sum = 0;
    while (1) {
        if (num > sum && num <= sum + i) {
            *layer = i;
            return (num - sum);
        }
        sum += i;
        i++;
    }
    return 0;
}// return seq
int main() {
    int layer;
    int seq;
    /*for (int i = 1; i < 100; i++) {
        seq = find_layer(i, &layer);
        printf("%d: %d: %d\n",i , layer, seq);
    }*/
    int num;
    std::cin >> num;
    seq = find_layer(num, &layer) - 1;
    // result: a/b
    int a, b;
    if (layer % 2 == 0) {
        b = layer - seq;
        a = 1 + seq;
    } else {
        a = layer - seq;
        b = 1 + seq;
    }
    printf("%d/%d\n",a, b);
    return 0;
}