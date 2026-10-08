
void FUN_100c7dfd0(long *param_1)

{
  int iVar1;
  
  if (param_1 != (long *)0x0) {
    iVar1 = FUN_100bf2cf0(param_1 + 8,0xffffffff,4,"x_info.c",0x5d);
    if (iVar1 < 1) {
      if (*param_1 != 0) {
        FUN_100c7cd70();
      }
      if (param_1[1] != 0) {
        FUN_100c7d620();
      }
      if (param_1[2] != 0) {
        FUN_100c86200();
      }
      if (param_1[7] != 0) {
        FUN_100bf3910();
      }
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

