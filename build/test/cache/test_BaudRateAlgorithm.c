#include "BaudRateAlgorithm.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_getDIV_given_baud_rate_is_9600_and_frequency_is_8MHz(void){

  uint32_t programValue;

  baudRateSetting(9600,8000000,&programValue);

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0x681)), (_U_SINT)(_UU32)((programValue)), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_UINT32);

}



void test_getDIV_given_baud_rate_is_19200_and_frequency_is_8MHz(void){

  uint32_t programValue;

  baudRateSetting(19200,8000000,&programValue);

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0x341)), (_U_SINT)(_UU32)((programValue)), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_UINT32);

}



void test_getDIV_given_baud_rate_is_38000_and_frequency_is_8MHz(void){

  uint32_t programValue;

  baudRateSetting(38400,8000000,&programValue);

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0x1A0)), (_U_SINT)(_UU32)((programValue)), (((void *)0)), (_U_UINT)27, UNITY_DISPLAY_STYLE_UINT32);

}



void test_getDIV_given_baud_rate_is_19200_and_frequency_is_16MHz(void){

  uint32_t programValue;

  baudRateSetting(19200,16000000,&programValue);

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0x681)), (_U_SINT)(_UU32)((programValue)), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_UINT32);

}



void test_getDIV_given_baud_rate_is_38000_and_frequency_is_16MHz(void){

  uint32_t programValue;

  baudRateSetting(38400,16000000,&programValue);

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0x341)), (_U_SINT)(_UU32)((programValue)), (((void *)0)), (_U_UINT)39, UNITY_DISPLAY_STYLE_UINT32);

}



void test_getDIV_given_baud_rate_is_57600_and_frequency_is_60MHz(void){

  uint32_t programValue;

  baudRateSetting(115200,60000000,&programValue);

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0x411)), (_U_SINT)(_UU32)((programValue)), (((void *)0)), (_U_UINT)45, UNITY_DISPLAY_STYLE_UINT32);

}



void test_getDIV_given_baud_rate_is_9600_and_frequency_is_45MHz(void){

  uint32_t programValue;

  baudRateSetting(9600,45000000,&programValue);

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0x2498)), (_U_SINT)(_UU32)((programValue)), (((void *)0)), (_U_UINT)51, UNITY_DISPLAY_STYLE_UINT32);





}



void test_getDIV_given_baud_rate_is_19200_and_frequency_is_45MHz(void){

  uint32_t programValue;

  baudRateSetting(19200,45000000,&programValue);

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0x1248)), (_U_SINT)(_UU32)((programValue)), (((void *)0)), (_U_UINT)59, UNITY_DISPLAY_STYLE_UINT32);





}



void test_getDIV_given_baud_rate_is_115200_and_frequency_is_45MHz(void){

  uint32_t programValue;

  baudRateSetting(115200,45000000,&programValue);

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0x307)), (_U_SINT)(_UU32)((programValue)), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_UINT32);





}









void xtest_roundOff_given_233_dot_7(void){



  float flt = 233.7;

  UnityAssertEqualNumber((_U_SINT)(_UU32)((234)), (_U_SINT)(_UU32)((roundOff(flt))), (((void *)0)), (_U_UINT)78, UNITY_DISPLAY_STYLE_UINT32);

  flt = 0.1;

  UnityAssertEqualNumber((_U_SINT)(_UU32)((0)), (_U_SINT)(_UU32)((roundOff(flt))), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_UINT32);

  flt = 20.467;

  UnityAssertEqualNumber((_U_SINT)(_UU32)((20)), (_U_SINT)(_UU32)((roundOff(flt))), (((void *)0)), (_U_UINT)82, UNITY_DISPLAY_STYLE_UINT32);

  flt = 67.99;

  UnityAssertEqualNumber((_U_SINT)(_UU32)((68)), (_U_SINT)(_UU32)((roundOff(flt))), (((void *)0)), (_U_UINT)84, UNITY_DISPLAY_STYLE_UINT32);

  flt = 100.7;

  UnityAssertEqualNumber((_U_SINT)(_UU32)((101)), (_U_SINT)(_UU32)((roundOff(flt))), (((void *)0)), (_U_UINT)86, UNITY_DISPLAY_STYLE_UINT32);

  flt = 99.99;

  UnityAssertEqualNumber((_U_SINT)(_UU32)((100)), (_U_SINT)(_UU32)((roundOff(flt))), (((void *)0)), (_U_UINT)88, UNITY_DISPLAY_STYLE_UINT32);



}
