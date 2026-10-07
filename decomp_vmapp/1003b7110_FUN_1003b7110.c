
char * FUN_1003b7110(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 >> 0xb & 0xf) - 1;
  if (uVar1 < 5) {
    return (&PTR_s_constant_100bbdf80)[(int)uVar1];
  }
  return "interpolation??";
}

