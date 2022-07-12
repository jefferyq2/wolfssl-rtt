#ifndef WOLFSSL_USER_SETTINGS_H_
#define WOLFSSL_USER_SETTINGS_H_

#ifdef __cplusplus
    extern "C" {
#endif

#define RTTHREAD


/* You can select one or all of the following tests */
#define WOLFSSL_WOLFCRYPT_TEST
#define WOLFSSL_BENCHMARK_TEST
#define WOLFSSL_CLIENT_TEST
#define WOLFSSL_SERVER_TEST
#define USE_TEST_GENSEED
#define NO_DEV_RANDOM
#define HAVE_PKCS7
#define HAVE_AES_KEYWRAP
#define HAVE_X963_KDF
#define WOLFSSL_AES_DIRECT
#define WC_NO_HARDEN
#define WOLFSSL_IGNORE_FILE_WARN
#define USE_INTEGER_HEAP_MATH

// #define DEBUG_WOLFSSL
// #define NO_WOLFSSL_SERVER
#define NO_OLD_TLS
// #define NO_DSA
// #define NO_ERROR_STRINGS
#define NO_MULTIBYTE_PRINT
// #define NO_CLIENT_CACHE
#define NO_SESSION_CACHE

/* adjust CURRENT_UNIX_TS to seconds since Jan 01 1970. (UTC)
You can get the current time from https://www.unixtimestamp.com/
*/
#define CURRENT_UNIX_TS 1542605837UL

/* When using Windows simulator, you must define USE_WINDOWS_API for test.h to build */
#ifdef _WIN32
#define USE_WINDOWS_API
#endif

#define NO_FILESYSTEM
#define SIZEOF_LONG_LONG 8

/* prevents from including multiple definition of main() */
#define NO_MAIN_DRIVER
#define NO_TESTSUITE_MAIN_DRIVER

/* includes certificate test buffers via header files */
#define USE_CERT_BUFFERS_2048
/*use kB instead of mB for embedded benchmarking*/
#define BENCH_EMBEDDED

#define NO_WRITE_TEMP_FILES

#define NO_WRITEV

#define HAVE_AESGCM
#define WOLFSSL_SHA512
#define HAVE_ECC
#define HAVE_CURVE25519
#define CURVE25519_SMALL
#define HAVE_ED25519
#define ED25519_SMALL

#ifdef __cplusplus
    }   /* extern "C" */
#endif

#endif
