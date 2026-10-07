
void FUN_100368c20(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x220);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x10 + uVar2 * 0x20) == param_2)) {
        *(undefined4 *)(param_1 + 0x10 + uVar2 * 0x20) = 0;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
      uVar1 = uVar1 >> 1;
    } while (uVar1 != 0);
  }
  if (*(int *)(param_1 + 0x238) == param_2) {
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  return;
}

