#include "unity.h"
#include "CPU.h"

void test_if_PS_N_value_is_set_to_0(void) {
    //given
    struct PS testPS;

    //when
    testPS.N = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.N, "Negative Flag should have value of 0.");
}

void test_if_PS_O_value_is_set_to_0(void) {
    //given
    struct PS testPS;

    //when
    testPS.O = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.O, "Overflow Flag should have value of 0.");
}

void test_if_PS_D_value_is_set_to_0(void) {
    //given
    struct PS testPS;

    //when
    testPS.D = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.D, "Decimal Mode Flag should have value of 0.");
}

void test_if_PS_I_value_is_set_to_0(void) {
    //given
    struct PS testPS;

    //when
    testPS.I = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.I, "Interrupt Disable Flag should have value of 0.");
}

void test_if_PS_Z_value_is_set_to_0(void) {
    //given
    struct PS testPS;

    //when
    testPS.Z = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.Z, "Zero Flag should have value of 0.");
}

void test_if_PS_BC_value_is_set_to_0(void) {
    //given
    struct PS testPS;

    //when
    testPS.BC = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.BC, "Break Command should have value of 0.");
}

void test_if_PS_C_value_is_set_to_0(void) {
    //given
    struct PS testPS;

    //when
    testPS.C = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.C, "Carry Flag should have value of 0.");
}

void test_if_PS_N_value_is_set_to_1(void) {
    //given
    struct PS testPS;

    //when
    testPS.N = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.N, "Negative Flag should have value of 1.");
}

void test_if_PS_O_value_is_set_to_1(void) {
    //given
    struct PS testPS;

    //when
    testPS.O = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.O, "Overflow Flag should have value of 1.");
}

void test_if_PS_D_value_is_set_to_1(void) {
    //given
    struct PS testPS;

    //when
    testPS.D = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.D, "Decimal Mode Flag should have value of 1.");
}

void test_if_PS_I_value_is_set_to_1(void) {
    //given
    struct PS testPS;

    //when
    testPS.I = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.I, "Interrupt Disable Flag should have value of 1.");
}

void test_if_PS_Z_value_is_set_to_1(void) {
    //given
    struct PS testPS;

    //when
    testPS.Z = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.Z, "Zero Flag should have value of 1.");
}

void test_if_PS_BC_value_is_set_to_1(void) {
    //given
    struct PS testPS;

    //when
    testPS.BC = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.BC, "Break Command should have value of 1.");
}

void test_if_PS_C_value_is_set_to_1(void) {
    //given
    struct PS testPS;

    //when
    testPS.C = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.C, "Carry Flag should have value of 1.");
}

void test_if_PS_is_8_bits(void) {
    //given
    size_t size = sizeof(struct PS);

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, size, "Index Register Y should be 1 byte in size.");
}

void test_if_Y_is_8_bits(void)
{
    //given
    Byte Y;

    //when
    size_t size = sizeof(Y);

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, size, "Index Register Y should be 1 byte in size.");
}

void test_if_X_is_8_bits(void)
{
    //given
    Byte X;

    //when
    size_t size = sizeof(X);

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, size, "Index Register X should be 1 byte in size.");
}

void test_if_A_is_8_bits(void)
{
    //given
    Byte A;

    //when
    size_t size = sizeof(A);

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, size, "Accumulator should be 1 byte in size.");
}

void test_if_SP_is_8_bits(void)
{
    //given
    Byte SP;

    //when
    size_t size = sizeof(SP);

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, size, "Stack Pointer should be 1 byte in size.");
}

void test_if_PC_is_16_bits(void)
{
    //given
    Word PC;

    //when
    size_t size = sizeof(PC);

    //then
    TEST_ASSERT_EQUAL_MESSAGE(2, size, "Program Counter should be 2 byte in size.");
}

void test_if_Byte_is_8_bits(void)
{
    //given
    size_t size = sizeof(Byte);

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, size, "Byte type should be 1 byte in size.");
}

void test_if_Word_is_16_bits(void)
{
    //given
    size_t size = sizeof(Word );

    //then
    TEST_ASSERT_EQUAL_MESSAGE(2, size, "Word type should be 2 byte in size.");
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_if_Byte_is_8_bits);
    RUN_TEST(test_if_Word_is_16_bits);
    RUN_TEST(test_if_PC_is_16_bits);
    RUN_TEST(test_if_SP_is_8_bits);
    RUN_TEST(test_if_A_is_8_bits);
    RUN_TEST(test_if_X_is_8_bits);
    RUN_TEST(test_if_Y_is_8_bits);
    RUN_TEST(test_if_PS_is_8_bits);
    RUN_TEST(test_if_PS_C_value_is_set_to_1);
    RUN_TEST(test_if_PS_BC_value_is_set_to_1);
    RUN_TEST(test_if_PS_Z_value_is_set_to_1);
    RUN_TEST(test_if_PS_I_value_is_set_to_1);
    RUN_TEST(test_if_PS_D_value_is_set_to_1);
    RUN_TEST(test_if_PS_O_value_is_set_to_1);
    RUN_TEST(test_if_PS_N_value_is_set_to_1);
    RUN_TEST(test_if_PS_C_value_is_set_to_0);
    RUN_TEST(test_if_PS_BC_value_is_set_to_0);
    RUN_TEST(test_if_PS_Z_value_is_set_to_0);
    RUN_TEST(test_if_PS_I_value_is_set_to_0);
    RUN_TEST(test_if_PS_D_value_is_set_to_0);
    RUN_TEST(test_if_PS_O_value_is_set_to_0);
    RUN_TEST(test_if_PS_N_value_is_set_to_0);
    return UNITY_END();
}