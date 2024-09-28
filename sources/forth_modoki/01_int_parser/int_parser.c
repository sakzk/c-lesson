#include <stdio.h>
#include <assert.h>

static const char* const input = "123 456  1203";

const char* parse_num(const char* p, int* result);

int main() {
    int answer1 = 0;
    int answer2 = 0;
    int answer3 = 0;

    // write something here.
    const char* p = input;
    p = parse_num(p, &answer1);
    p = parse_num(p, &answer2);
    p = parse_num(p, &answer3);

    // verity result.
    assert(answer1 == 123);
    assert(answer2 == 456);
    assert(answer3 == 1203);

    return 0;
}

const char* parse_num(const char* p, int* result) {
    *result = 0;
    while ('0' <= *p && *p <= '9') {
        *result = 10 * (*result) + (*p - '0');
        p++;
    }
    while (*p == ' ')
        p++;
    return p;
}
