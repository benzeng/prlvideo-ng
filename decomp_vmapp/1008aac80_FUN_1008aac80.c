
void FUN_1008aac80(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_10081d580(param_1 + 0x50,0xffffffff,5,"x_pkey.c",0x83);
    if (iVar1 < 1) {
      if (*(long *)(param_1 + 8) != 0) {
        FUN_10089f8c0();
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_1008afd70();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_1008924e0();
      }
      if ((*(long *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
        FUN_10081e1a0();
      }
      FUN_10081e1a0(param_1);
      return;
    }
  }
  return;
}

