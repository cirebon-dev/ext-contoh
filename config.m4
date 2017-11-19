PHP_ARG_ENABLE(contoh, Whether to enable the ext_contoh PHP extension, [ --enable-contoh-php Enable contoh extension])

if test "$PHP_CONTOH" != "no"; then
    PHP_NEW_EXTENSION(ext_contoh, ext_contoh.c, $ext_shared)
fi