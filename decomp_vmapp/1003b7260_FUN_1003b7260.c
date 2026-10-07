
char * FUN_1003b7260(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 >> 0xb & 0x3f) - 1;
  if (uVar1 < 0xd) {
    return (&PTR_s_pointlist_100bbe240)[(int)uVar1];
  }
  return "topology?";
}

