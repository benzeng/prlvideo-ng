
bool FUN_100ab6300(long param_1,int param_2,long *param_3)

{
  if (param_2 == 0) {
    *param_3 = param_1 + 8;
    *(undefined4 *)(param_3 + 1) = 0x10;
  }
  return param_2 == 0;
}

