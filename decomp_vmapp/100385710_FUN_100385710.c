
void FUN_100385710(long *param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (1 < param_2) {
    iVar6 = 0;
    iVar4 = 0;
    uVar3 = 0;
    uVar5 = param_2;
    do {
      if ((uVar5 & 1) != 0) {
        iVar2 = FUN_10038e620(*(undefined4 *)(*(long *)(param_1[5] + 0x58 + uVar3 * 0x20) + 0x18),
                              iVar6);
        iVar4 = iVar4 + (uint)(iVar2 != iVar6);
        iVar6 = iVar2;
      }
      uVar3 = (ulong)((int)uVar3 + 1);
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
    if (iVar4 != 1) {
      (**(code **)(*param_1 + 0x30))();
      uVar3 = 0;
      do {
        if ((param_2 & 1) != 0) {
          lVar1 = *(long *)(param_1[5] + 0x58 + uVar3 * 0x20);
          if (*(int *)(lVar1 + 0x18) != iVar6) {
            (*DAT_1011c5768)(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar1 + 0xc));
            *(int *)(lVar1 + 0x18) = iVar6;
            FUN_100381460(param_1,*(undefined8 *)(param_1[5] + 0x60 + uVar3 * 0x20));
          }
        }
        uVar3 = (ulong)((int)uVar3 + 1);
        param_2 = param_2 >> 1;
      } while (param_2 != 0);
    }
  }
  return;
}

