
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10045b7c0(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar4 = _UNK_100b2dda8;
  uVar3 = _DAT_100b2dda0;
  iVar6 = (int)(*(int *)(param_1 + 0x10) + 0x20 +
               ((uint)(*(int *)(param_1 + 0x10) + 0x20 >> 0x1f) >> 0x1a)) >> 6;
  iVar5 = 2;
  if (1 < iVar6) {
    iVar5 = iVar6;
  }
  lVar7 = -0x16c;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x60c + lVar7 * 4);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    piVar2 = (int *)(param_1 + 0xbd0 + lVar7 * 4);
    *piVar2 = iVar5;
    piVar2[1] = iVar5;
    piVar2[2] = iVar5;
    piVar2[3] = iVar5;
    puVar1 = (undefined8 *)(param_1 + 0x118c + lVar7 * 4);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + 0x1740 + lVar7 * 4);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x60c) = 1;
  *(int *)(param_1 + 0xbd0) = iVar5;
  *(undefined4 *)(param_1 + 0x118c) = 0;
  *(undefined4 *)(param_1 + 0x1740) = 0;
  *(undefined4 *)(param_1 + 0x610) = 1;
  *(undefined4 *)(param_1 + 0x614) = 1;
  *(int *)(param_1 + 0xbd4) = iVar5;
  *(int *)(param_1 + 0xbd8) = iVar5;
  *(undefined8 *)(param_1 + 0x618) = 0;
  return;
}

