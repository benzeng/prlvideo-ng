
void FUN_1003112d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  if (param_1[2] != 0) {
    uVar2 = 0;
    if (*(int *)(param_2 + 0xc) == 0x8513) {
      uVar4 = *(int *)(param_2 + 0x10) - 0x8515;
      uVar2 = 0;
      if (uVar4 < 6) {
        uVar2 = (ulong)uVar4;
      }
    }
    uVar1 = *(undefined8 *)(param_2 + 0x20 + uVar2 * 8);
    lVar3 = FUN_1002adb30(*param_1);
    FUN_1002faad0(*param_1,param_1 + 0x14cd,uVar1,*(undefined1 *)(param_1 + 1),0);
    param_1[4] = param_2;
    if (lVar3 != param_1[2]) {
      FUN_1002adb30(*param_1,lVar3);
      return;
    }
  }
  return;
}

