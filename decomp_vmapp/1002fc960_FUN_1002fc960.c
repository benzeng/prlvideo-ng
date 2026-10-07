
void FUN_1002fc960(long param_1,undefined4 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x9b8 + (ulong)*(uint *)(param_1 + 0x118c0) * 0x8f0) != 0) {
    lVar1 = FUN_1002adb30(param_1);
    *(undefined4 *)(param_1 + 0x118e4) = param_2;
    FUN_1002ac290(param_1,*(undefined4 *)(param_1 + 0x118c0),2);
    if (lVar1 != 0) {
      FUN_1002adb30(param_1,lVar1);
      return;
    }
  }
  return;
}

