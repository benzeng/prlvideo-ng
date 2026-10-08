
void FUN_100ac9400(long param_1)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x90) != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x92);
    local_28 = in_RAX;
    _GetFrontProcess(&local_28);
    if ((local_28._4_4_ == (int)((ulong)uVar1 >> 0x20)) && ((int)local_28 == (int)uVar1)) {
      *(undefined1 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x92) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_100ae4b50(param_1);
  return;
}

