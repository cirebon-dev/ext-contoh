#include <php.h>
#include "ext_contoh.h"
zend_function_entry ext_contoh_functions[] = {
    PHP_FE(ext_contoh, NULL)
    {NULL, NULL, NULL}
};


zend_module_entry ext_contoh_module_entry = {
    STANDARD_MODULE_HEADER,
    CONTOH_EXTNAME,
    ext_contoh_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    CONTOH_VERSION,
    STANDARD_MODULE_PROPERTIES
};

ZEND_GET_MODULE(ext_contoh)

PHP_FUNCTION(ext_contoh) {
    php_printf("yey ext contoh berhasil!");
}