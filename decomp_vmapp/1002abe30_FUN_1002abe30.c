
void FUN_1002abe30(long param_1,uint param_2,uint param_3,ulong param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined4 uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  undefined4 *puVar15;
  
  lVar7 = DAT_1011c4a88;
  lVar13 = (ulong)param_2 * 0x8f0;
  lVar10 = *(long *)(param_1 + 0x9b8 + lVar13);
  if (lVar10 == 0) {
    lVar10 = *(long *)(param_1 + 0x868);
  }
  if (DAT_1011c4a88 != lVar10) {
    DAT_1011c4a88 = lVar10;
    _CGLSetCurrentContext();
  }
  uVar8 = param_3;
  if (*(int *)(param_1 + 0x9e0 + lVar13) == 0x2601) {
    uVar8 = param_3 - 1;
    if (param_3 == 0) {
      uVar8 = param_3;
    }
    uVar12 = (ulong)((int)param_4 - 1);
    if ((int)param_4 == 0) {
      uVar12 = param_4 & 0xffffffff;
    }
    param_4 = uVar12;
    param_5 = param_5 + (param_5 < *(uint *)(param_1 + 0x938 + lVar13));
    param_6 = param_6 + (param_6 < *(uint *)(param_1 + 0x93c + lVar13));
  }
  uVar12 = (ulong)uVar8;
  puVar1 = (uint *)(param_1 + 0x930 + lVar13);
  piVar2 = (int *)(param_1 + 0x940 + lVar13);
  uVar3 = *(uint *)(param_1 + 0x940 + lVar13);
  iVar14 = (int)param_4;
  if (uVar3 < 0x1f) {
    FUN_1002ac850(param_1,param_2,uVar12);
    (*DAT_1011c66f0)(0xcf2,*(uint *)(param_1 + 0x990 + lVar13) >> 2);
    lVar10 = (ulong)(uint)(*(int *)(param_1 + 0x990 + lVar13) * iVar14) + uVar12 * 4 +
             *(long *)(param_1 + 0x988 + lVar13);
  }
  else {
    uVar5 = (ulong)(uVar3 + 7 >> 3);
    uVar6 = (ulong)*(uint *)(param_1 + 0x934 + lVar13);
    (*DAT_1011c66f0)(0xcf2,uVar6 / uVar5,uVar6 % uVar5);
    lVar10 = (ulong)((*piVar2 + 7U >> 3) * uVar8) +
             (ulong)(uint)(*(int *)(param_1 + 0x934 + lVar13) * iVar14) + (ulong)*puVar1 +
             *(long *)(param_1 + 0x920);
  }
  if (*(char *)(param_1 + 0x9e4 + lVar13) == '\0') {
    puVar15 = (undefined4 *)(param_1 + 0x9d4 + lVar13);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x9d0 + lVar13);
    puVar15 = (undefined4 *)(param_1 + 0x9d4 + lVar13);
    iVar4 = *(int *)(param_1 + 0x9d4 + lVar13);
    FUN_1002adbf0(param_1,puVar1);
    (*DAT_1011c5e90)(1,puVar15);
    if (iVar9 == iVar4) {
      *(undefined4 *)(param_1 + 0x9d0 + lVar13) = *(undefined4 *)(param_1 + 0x9d4 + lVar13);
    }
    (*DAT_1011c5768)(0xde1);
    (*DAT_1011c6cd8)(0xde1,0x2800,0x2600);
    (*DAT_1011c6cd8)(0xde1,0x2801,0x2600);
    (*DAT_1011c6cd8)(0xde1,0x2802,0x812f);
    (*DAT_1011c6cd8)(0xde1,0x2803,0x812f);
    uVar11 = 0x1908;
    if (*piVar2 != 0x1f) {
      uVar11 = 0x80e1;
    }
    (*DAT_1011c6c98)(0xde1,0,0x8058,*(undefined4 *)(param_1 + 0x938 + lVar13),
                     *(undefined4 *)(param_1 + 0x93c + lVar13),0,uVar11,0x8367,0);
    (*DAT_1011c5768)(0xde1,0);
    (*DAT_1011c5e48)(1,param_1 + 0x9d8 + lVar13);
    (*DAT_1011c5738)(0x8ca8,0);
    (*DAT_1011c5738)(0x8ca9,*(undefined4 *)(param_1 + 0x9d8 + lVar13));
    (*DAT_1011c5de8)(0x8ca9,0x8ce0,0xde1,*puVar15,0);
    (*DAT_1011c5de8)(0x8ca9,0x821a,0xde1,0,0);
    (*DAT_1011c5c00)(0x8ce0);
    iVar9 = (*DAT_1011c5808)(0x8d40);
    if (iVar9 != 0x8cd5) {
      FUN_1008e3970("","LocalDevices",0,"Failed to initialize FBO for LFBTexture (status=%d)");
    }
    (*DAT_1011c5738)(0x8ca9,0);
    (*DAT_1011c5c00)(0x405);
    *(undefined1 *)(param_1 + 0x9e4 + lVar13) = 0;
  }
  (*DAT_1011c5768)(0xde1,*puVar15);
  uVar11 = 0x1908;
  if (*piVar2 != 0x1f) {
    uVar11 = 0x80e1;
  }
  (*DAT_1011c6cf0)(0xde1,0,uVar12,param_4,param_5 - uVar8,param_6 - iVar14,uVar11,0x8367,lVar10);
  *(undefined1 *)(param_1 + 0x968 + lVar13) = 0;
  if (*(char *)(param_1 + 0x870) != '\0') {
    (*DAT_1011c5d48)();
  }
  if ((lVar7 != 0) && (DAT_1011c4a88 != lVar7)) {
    DAT_1011c4a88 = lVar7;
    _CGLSetCurrentContext();
    return;
  }
  return;
}

