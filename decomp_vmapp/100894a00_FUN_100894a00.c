
undefined4 * FUN_100894a00(undefined4 *param_1,int param_2)

{
  if (param_2 == 1) {
    *param_1 = 1;
    **(undefined4 **)(param_1 + 6) = 0x10;
  }
  else if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    FUN_100887ce0(6,0x70,0x75,"evp_pkey.c",0xa4);
    param_1 = (undefined4 *)0x0;
  }
  return param_1;
}

