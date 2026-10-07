
void FUN_100333fe0(long param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_2 < 0x10) {
    uVar3 = (ulong)param_2;
    cVar1 = *(char *)(param_1 + 0x2c + uVar3 * 0x14);
    iVar2 = *(int *)(param_1 + 0x30 + uVar3 * 0x14);
    *(undefined4 *)(param_1 + 0x30 + uVar3 * 0x14) = 0;
    *(undefined4 *)(param_1 + 0x20 + uVar3 * 0x14) = 0;
    *(undefined4 *)(param_1 + 0x24 + uVar3 * 0x14) = param_3;
    *(undefined1 *)(param_1 + 0x2c + uVar3 * 0x14) = 1;
    if ((iVar2 != 0) || (cVar1 == '\0')) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 1 << ((byte)param_2 & 0x1f);
    }
  }
  return;
}

