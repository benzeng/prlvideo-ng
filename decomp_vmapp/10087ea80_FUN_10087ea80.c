
bool FUN_10087ea80(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_10087ccc0();
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(long *)(param_1 + 0x30) = lVar1;
  }
  return lVar1 != 0;
}

