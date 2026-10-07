
char * FUN_1003b7230(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 >> 0xb & 0x3f) - 1;
  if (uVar1 < 0x27) {
    return (&PTR_s_point_100bbe100)[(int)uVar1];
  }
  return "primitive?";
}

