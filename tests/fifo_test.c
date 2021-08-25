#include <stdarg.h>
#include <setjmp.h>
#include <stddef.h>
#include <stdint.h>
#include "../bin/_deps/cmocka-src/include/cmocka.h"

static void test(void **state)
{
    assert_int_equal(2, 2);
}

int main()
{
    const struct CMUnitTest tests[] =
    {
        cmocka_unit_test(test),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);