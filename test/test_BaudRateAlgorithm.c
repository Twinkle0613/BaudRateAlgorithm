#include "unity.h"
#include "BaudRateAlgorithm.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getDIV_given_baud_rate_is_9600_and_frequency_is_8MHz(void){
  uint32_t programValue;
  baudRateSetting(9600,8000000,&programValue);
  TEST_ASSERT_EQUAL_UINT32(0x681,programValue);
}

void test_getDIV_given_baud_rate_is_19200_and_frequency_is_8MHz(void){
  uint32_t programValue;
  baudRateSetting(19200,8000000,&programValue);
  TEST_ASSERT_EQUAL_UINT32(0x341,programValue);
}

void test_getDIV_given_baud_rate_is_38000_and_frequency_is_8MHz(void){
  uint32_t programValue;
  baudRateSetting(38400,8000000,&programValue);
  TEST_ASSERT_EQUAL_UINT32(0x1A0,programValue);
}

void test_getDIV_given_baud_rate_is_19200_and_frequency_is_16MHz(void){
  uint32_t programValue;
  baudRateSetting(19200,16000000,&programValue);
  TEST_ASSERT_EQUAL_UINT32(0x681,programValue);
}

void test_getDIV_given_baud_rate_is_38000_and_frequency_is_16MHz(void){
  uint32_t programValue;
  baudRateSetting(38400,16000000,&programValue);
  TEST_ASSERT_EQUAL_UINT32(0x341,programValue);
}

void test_getDIV_given_baud_rate_is_57600_and_frequency_is_60MHz(void){
  uint32_t programValue;
  baudRateSetting(115200,60000000,&programValue);
  TEST_ASSERT_EQUAL_UINT32(0x411,programValue);
}

void test_getDIV_given_baud_rate_is_9600_and_frequency_is_45MHz(void){
  uint32_t programValue;
  baudRateSetting(9600,45000000,&programValue);
  TEST_ASSERT_EQUAL_UINT32(0x2498,programValue);//0x249
  //585.9375
  //0.9375*8 = 7.5 => 8 => 0x8
}

void test_getDIV_given_baud_rate_is_19200_and_frequency_is_45MHz(void){
  uint32_t programValue;
  baudRateSetting(19200,45000000,&programValue);
  TEST_ASSERT_EQUAL_UINT32(0x1248,programValue); //0x124
  //292.9687
  //0.9687*8 = 7.7 => 8 => 0x8
}

void test_getDIV_given_baud_rate_is_115200_and_frequency_is_45MHz(void){
  uint32_t programValue;
  baudRateSetting(115200,45000000,&programValue);
  TEST_ASSERT_EQUAL_UINT32(0x307,programValue); //0x307
  //48.828
  //0.828*8 = 7 => 7 => 0x7
}




void xtest_roundOff_given_233_dot_7(void){

  float flt = 233.7;
  TEST_ASSERT_EQUAL_UINT32(234,roundOff(flt));
  flt = 0.1;
  TEST_ASSERT_EQUAL_UINT32(0,roundOff(flt));
  flt = 20.467;
  TEST_ASSERT_EQUAL_UINT32(20,roundOff(flt));
  flt = 67.99;
  TEST_ASSERT_EQUAL_UINT32(68,roundOff(flt));
  flt = 100.7;
  TEST_ASSERT_EQUAL_UINT32(101,roundOff(flt));
  flt = 99.99;
  TEST_ASSERT_EQUAL_UINT32(100,roundOff(flt));
  
}

