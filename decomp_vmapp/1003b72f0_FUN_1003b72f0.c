
char * FUN_1003b72f0(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 >> 0xb & 7) - 1;
  if (uVar1 < 4) {
    return (&PTR_s_partitioning_integer_100bbe2f0)[(int)uVar1];
  }
  return "partitioning?";
}

