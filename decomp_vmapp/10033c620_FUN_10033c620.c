
void FUN_10033c620(long param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 < 0x10) {
    uVar2 = (ulong)param_2;
    iVar1 = *(int *)(param_1 + 0x30 + uVar2 * 0x14);
    *(int *)(param_1 + 0x30 + uVar2 * 0x14) = param_3;
    *(undefined4 *)(param_1 + 0x24 + uVar2 * 0x14) = param_4;
    *(undefined4 *)(param_1 + 0x20 + uVar2 * 0x14) = param_5;
    *(undefined1 *)(param_1 + 0x2c + uVar2 * 0x14) = 0;
    if (iVar1 != param_3) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1 << ((byte)param_2 & 0x1f);
    }
  }
  return;
}

