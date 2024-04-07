find_path(MBEDTLS_INCLUDE_DIRS mbedtls/ssl.h)

find_library(MBEDCRYPTO_LIBRARY mbedcrypto)
find_library(MBEDTLS_LIBRARY mbedtls)
find_library(MBEDX509_LIBRARY mbedx509)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(MbedTLS DEFAULT_MSG
MBEDTLS_INCLUDE_DIRS MBEDCRYPTO_LIBRARY MBEDTLS_LIBRARY MBEDX509_LIBRARY)
