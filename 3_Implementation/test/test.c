#include "header.h"
#include "unity.h"

void setUp(){}
void tearDown(){}

void test_login(void)
{
    TEST_ASSERT_EQUAL(1,view()>0);
}

void test_insert(void)
{
    TEST_ASSERT_EQUAL(1,insert()>0);
}

void test_old(void)
{
    TEST_ASSERT_EQUAL(1,old()>0);
}

int test_main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_login);
    RUN_TEST(test_insert);
    RUN_TEST(test_old);
    return UNITY_END();
}
