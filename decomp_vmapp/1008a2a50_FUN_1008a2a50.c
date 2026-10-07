
void FUN_1008a2a50(long *param_1)

{
  int iVar1;
  
  if (param_1 != (long *)0x0) {
    iVar1 = FUN_10081d580(param_1 + 8,0xffffffff,4,"x_info.c",0x5d);
    if (iVar1 < 1) {
      if (*param_1 != 0) {
        FUN_1008a17f0();
      }
      if (param_1[1] != 0) {
        FUN_1008a20a0();
      }
      if (param_1[2] != 0) {
        FUN_1008aac80();
      }
      if (param_1[7] != 0) {
        FUN_10081e1a0();
      }
      FUN_10081e1a0(param_1);
      return;
    }
  }
  return;
}

