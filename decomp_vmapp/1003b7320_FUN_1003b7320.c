
char * FUN_1003b7320(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 >> 0xb & 7) - 1;
  if (uVar1 < 4) {
    return (&PTR_s_output_point_100bbe310)[(int)uVar1];
  }
  return "output?";
}

