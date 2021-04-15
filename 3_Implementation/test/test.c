#include "header.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_login(void)
{
    TEST_ASSERT_EQUAL(1,view()>0);
}

int test_main(void)
{
    RUN_TEST(test_login);
    return UNITY_END();
}
