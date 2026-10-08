
void FUN_100c74e10(long *param_1)

{
  uint uVar1;
  
  if (param_1 != (long *)0x0) {
    uVar1 = *(uint *)(param_1 + 4);
    if ((uVar1 & 4) != 0) {
      if (*param_1 != 0) {
        FUN_100bf3910();
      }
      if (param_1[1] != 0) {
        FUN_100bf3910();
      }
      param_1[1] = 0;
      *param_1 = 0;
      uVar1 = *(uint *)(param_1 + 4);
    }
    if ((uVar1 & 8) != 0) {
      if (param_1[3] != 0) {
        FUN_100bf3910();
        uVar1 = *(uint *)(param_1 + 4);
      }
      param_1[3] = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
    }
    if ((uVar1 & 1) != 0) {
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

