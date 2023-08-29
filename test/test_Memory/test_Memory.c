#include "unity.h"
#include "Memory.h"

void test_if_system_uses_little_endian(void)
{
    //given
    int n = 1;

    //when
    /*
     * according to https://stackoverflow.com/questions/4181951/how-to-check-whether-a-system-is-big-endian-or-little-endian
     * int n = 1;
     * little endian if true
     * if(*(char *)&n == 1) {...}
     */

    //then
    TEST_ASSERT_MESSAGE(*(char *)&n == 1, "System uses big endian.");
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_if_system_uses_little_endian);

    return UNITY_END();
}
