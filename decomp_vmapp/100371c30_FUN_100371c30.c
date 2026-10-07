
void FUN_100371c30(long param_1,undefined4 param_2,uint param_3,long param_4,long param_5)

{
  undefined4 *puVar1;
  uint *puVar2;
  long lVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  puVar1 = (undefined4 *)(param_1 + 0x13d0);
  if (param_3 != 0) {
    lVar3 = 0;
    if ((param_3 & 3) != 0) {
      lVar3 = 0;
      puVar5 = puVar1;
      do {
        *puVar5 = *(undefined4 *)(param_4 + lVar3 * 4);
        lVar3 = lVar3 + 1;
        puVar5 = puVar5 + 4;
      } while ((param_3 & 3) != (uint)lVar3);
    }
    if (2 < param_3 - 1) {
      puVar5 = (undefined4 *)(param_4 + 0xc + lVar3 * 4);
      puVar6 = (undefined4 *)(lVar3 * 0x10 + 0x1400 + param_1);
      iVar7 = (param_3 + 3) - ((int)lVar3 + 3);
      do {
        puVar6[-0xc] = puVar5[-3];
        puVar6[-8] = puVar5[-2];
        puVar6[-4] = puVar5[-1];
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 4;
        puVar6 = puVar6 + 0x10;
        iVar7 = iVar7 + -4;
      } while (iVar7 != 0);
    }
  }
  puVar2 = *(uint **)(param_5 + 0x58);
  for (puVar4 = *(uint **)(param_5 + 0x50); puVar4 != puVar2; puVar4 = puVar4 + 2) {
    puVar1[(ulong)*puVar4 * 4] = puVar4[1];
  }
  (*DAT_1011c5708)(0x8a11,*(undefined4 *)(param_1 + 0x14d0));
  (*DAT_1011c57d8)(0x8a11,(ulong)param_3 << 4,puVar1,0x88e0);
                    /* WARNING: Could not recover jumptable at 0x000100371d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c74b0)(0x8a11,param_2,*(undefined4 *)(param_1 + 0x14d0));
  return;
}

