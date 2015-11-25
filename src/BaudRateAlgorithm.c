#include "BaudRateAlgorithm.h"
#include "stdint.h"
//#include "stdlib.h"
void baudRateSetting(int baudRate,int fpclk, uint32_t* pgmValue){
  
  float DIV;
  uint32_t mantissa;
  uint32_t fraction;
  float floatNumber;
  int int2;
  int intNumber;
  DIV = (  (float)fpclk )/( ((float)baudRate ) *8);
  mantissa = (uint32_t)DIV;
  floatNumber = ( DIV - mantissa ) * 8;
  fraction = roundOff(floatNumber);
  *pgmValue = ( (mantissa << 4 ) | fraction ) & 0x0000FFFF;
 // printf("DIV = %f (%x)\n",DIV,DIV);
 // printf("mantissa = %d (0x%x)\n",mantissa,mantissa);
 // printf("floatNumber = %f (0x%x)\n",floatNumber,floatNumber);
 // printf("fraction = %d (0x%x)\n",fraction,fraction);
 // printf("pgmValue = %d (0x%x)\n",*pgmValue,*pgmValue);

  
  
}


uint32_t roundOff(float floatNumber){
  uint32_t int0;
  uint32_t int1;
  uint32_t int2;
  uint32_t int3;
 // printf("floatNumber = %f\n",floatNumber);
  int0 = floatNumber;
  int1 = int0 * 10;
  int2 = floatNumber * 10;
  int3 = int2 - int1;
 // printf("int0 = %d,int1 = %d,int2 = %d,int3 = %d\n",int0,int1,int2,int3);
  if(int3 >= 5 ){
   return int0+1;
  }
   return int0;
  
}

