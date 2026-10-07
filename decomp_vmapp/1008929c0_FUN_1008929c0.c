
bool FUN_1008929c0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10088a690();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(long *)(param_1 + 0x30) = lVar1;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return lVar1 != 0;
}

