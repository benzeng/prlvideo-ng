
void FUN_100c86200(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_100bf2cf0(param_1 + 0x50,0xffffffff,5,"x_pkey.c",0x83);
    if (iVar1 < 1) {
      if (*(long *)(param_1 + 8) != 0) {
        FUN_100c7ae40();
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_100c8b2f0();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_100c6d8c0();
      }
      if ((*(long *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
        FUN_100bf3910();
      }
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

