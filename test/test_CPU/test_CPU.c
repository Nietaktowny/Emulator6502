#include "unity.h"
#include "CPU.h"

void test_CPU_get_register_not_null_for_Y(void) {
    //given
    char Y_name = 'Y';
    Byte* Y_reg;

    //when
    Y_reg = CPU_get_register(Y_name);

    //then
    TEST_ASSERT_NOT_NULL_MESSAGE(Y_reg, "Returned pointer should not be NULL");
}

void test_CPU_get_register_not_null_for_X(void) {
    //given
    char X_name = 'X';
    Byte* X_reg;

    //when
    X_reg = CPU_get_register(X_name);

    //then
    TEST_ASSERT_NOT_NULL_MESSAGE(X_reg, "Returned pointer should not be NULL");
}

void test_CPU_get_register_not_null_for_A(void) {
    //given
    char A_name = 'A';
    Byte* A_reg;

    //when
    A_reg = CPU_get_register(A_name);

    //then
    TEST_ASSERT_NOT_NULL_MESSAGE(A_reg, "Returned pointer should not be NULL");
}

void test_CPU_get_register_returns_null_if_name_invalid(void) {
    //given
    char inv_name = '!';
    Byte* wrong_reg;

    //when
    wrong_reg = CPU_get_register(inv_name);

    //then
    TEST_ASSERT_NULL_MESSAGE(wrong_reg, "When name is invalid, returned value should be NULL");
}

void test_CPU_reset_sets_A_register_to_0(void) {
    //given
    Byte* actual_A = CPU_get_register('A');

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, *actual_A, "A register after reset should be set to 0.");
}

void test_CPU_reset_sets_Y_register_to_0(void) {
    //given
    Byte* actual_Y = CPU_get_register('Y');

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, *actual_Y, "Y register after reset should be set to 0.");
}

void test_CPU_reset_sets_X_register_to_0(void) {
    //given
    Byte* actual_X = CPU_get_register('X');

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, *actual_X, "X register after reset should be set to 0.");
}

void test_CPU_reset_sets_PS_N_flag_to_0(void) {
    //given
    processor_status_t* actual_PS = CPU_get_PS();

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, actual_PS->N, "PS->N after reset should be set to 0.");
}

void test_CPU_reset_sets_PS_O_flag_to_0(void) {
    //given
    processor_status_t* actual_PS = CPU_get_PS();

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, actual_PS->O, "PS->O after reset should be set to 0.");
}

void test_CPU_reset_sets_PS_D_flag_to_0(void) {
    //given
    processor_status_t* actual_PS = CPU_get_PS();

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, actual_PS->D, "PS->D after reset should be set to 0.");
}

void test_CPU_reset_sets_PS_I_flag_to_0(void) {
    //given
    processor_status_t* actual_PS = CPU_get_PS();

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, actual_PS->I, "PS->I after reset should be set to 0.");
}

void test_CPU_reset_sets_PS_Z_flag_to_0(void) {
    //given
    processor_status_t* actual_PS = CPU_get_PS();

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, actual_PS->Z, "PS->Z after reset should be set to 0.");
}

void test_CPU_reset_sets_PS_C_flag_to_0(void) {
    //given
    processor_status_t* actual_PS = CPU_get_PS();

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, actual_PS->C, "PS->C after reset should be set to 0.");
}

void test_CPU_reset_sets_PS_BC_flag_to_0(void) {
    //given
    processor_status_t* actual_PS = CPU_get_PS();

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0, actual_PS->BC, "PS->BC after reset should be set to 0.");
}

void test_CPU_reset_sets_SP(void) {
    //given
    Byte* actual_SP = CPU_get_SP();

    //when
    CPU_reset();

    //then
    TEST_ASSERT_EQUAL_MESSAGE(0xFF, *actual_SP, "SP after reset should be set to 0xFF aka 255");
}

void test_if_PS_N_value_is_set_to_0(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.N = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.N, "Negative Flag should have value of 0.");
}

void test_if_PS_O_value_is_set_to_0(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.O = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.O, "Overflow Flag should have value of 0.");
}

void test_if_PS_D_value_is_set_to_0(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.D = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.D, "Decimal Mode Flag should have value of 0.");
}

void test_if_PS_I_value_is_set_to_0(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.I = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.I, "Interrupt Disable Flag should have value of 0.");
}

void test_if_PS_Z_value_is_set_to_0(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.Z = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.Z, "Zero Flag should have value of 0.");
}

void test_if_PS_BC_value_is_set_to_0(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.BC = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.BC, "Break Command should have value of 0.");
}

void test_if_PS_C_value_is_set_to_0(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.C = 0;

    //then
    TEST_ASSERT_FALSE_MESSAGE(testPS.C, "Carry Flag should have value of 0.");
}

void test_if_PS_N_value_is_set_to_1(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.N = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.N, "Negative Flag should have value of 1.");
}

void test_if_PS_O_value_is_set_to_1(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.O = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.O, "Overflow Flag should have value of 1.");
}

void test_if_PS_D_value_is_set_to_1(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.D = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.D, "Decimal Mode Flag should have value of 1.");
}

void test_if_PS_I_value_is_set_to_1(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.I = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.I, "Interrupt Disable Flag should have value of 1.");
}

void test_if_PS_Z_value_is_set_to_1(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.Z = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.Z, "Zero Flag should have value of 1.");
}

void test_if_PS_BC_value_is_set_to_1(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.BC = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.BC, "Break Command should have value of 1.");
}

void test_if_PS_C_value_is_set_to_1(void) {
    //given
    struct processor_status testPS;

    //when
    testPS.C = 1;

    //then
    TEST_ASSERT_EQUAL_MESSAGE(1, testPS.C, "Carry Flag should have value of 1.");
}

void test_if_PS_is_8_bits(void) {
    //given
    size_t size = sizeof(struct processor_status);

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
    RUN_TEST(test_CPU_reset_sets_SP);
    RUN_TEST(test_CPU_reset_sets_PS_BC_flag_to_0);
    RUN_TEST(test_CPU_reset_sets_PS_C_flag_to_0);
    RUN_TEST(test_CPU_reset_sets_PS_Z_flag_to_0);
    RUN_TEST(test_CPU_reset_sets_PS_I_flag_to_0);
    RUN_TEST(test_CPU_reset_sets_PS_D_flag_to_0);
    RUN_TEST(test_CPU_reset_sets_PS_O_flag_to_0);
    RUN_TEST(test_CPU_reset_sets_PS_N_flag_to_0);
    RUN_TEST(test_CPU_reset_sets_X_register_to_0);
    RUN_TEST(test_CPU_reset_sets_Y_register_to_0);
    RUN_TEST(test_CPU_reset_sets_A_register_to_0);
    RUN_TEST(test_CPU_get_register_returns_null_if_name_invalid);
    RUN_TEST(test_CPU_get_register_not_null_for_A);
    RUN_TEST(test_CPU_get_register_not_null_for_X);
    RUN_TEST(test_CPU_get_register_not_null_for_Y);
    return UNITY_END();
}