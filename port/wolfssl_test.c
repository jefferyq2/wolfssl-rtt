#include <stddef.h>
#include <wolfcrypt/test/test.h>
#include <wolfcrypt/benchmark/benchmark.h>

int wolfssl_test(void) {
#if !defined(NO_CRYPT_TEST)
    wolfcrypt_test(NULL);
#endif
#if !defined(NO_CRYPT_BENCHMARK)
    benchmark_test(NULL);
#endif
    return 0;
}
