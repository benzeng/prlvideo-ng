
void FUN_1002fca60(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_1002adb30(param_1,*(undefined8 *)
                                 (param_1 + 0x9b8 + (ulong)*(uint *)(param_1 + 0x118c0) * 0x8f0));
  if ((param_2 & 0x2000) == 0) {
    if (*(int *)(param_1 + 0x118e4) != 0) {
      (*(code *)DAT_1011c4a88[0x3c])(*DAT_1011c4a88,1);
    }
    if (*(int *)(param_1 + 0x118ec) != 0) {
      (*(code *)DAT_1011c4a88[0x3c])(*DAT_1011c4a88,1,param_1 + 0x118ec);
    }
    if (*(int *)(param_1 + 0x118e8) != 0) {
      (*(code *)DAT_1011c4a88[0x3c])(*DAT_1011c4a88,1,param_1 + 0x118e8);
    }
  }
  *(undefined4 *)(param_1 + 0x118e4) = 0;
  *(undefined4 *)(param_1 + 0x118ec) = 0;
  *(undefined4 *)(param_1 + 0x118e8) = 0;
  *(undefined1 *)(param_1 + 0x11900) = 1;
  if (lVar1 == 0) {
    return;
  }
  FUN_1002adb30(param_1,lVar1);
  return;
}

