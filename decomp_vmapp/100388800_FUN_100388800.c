
void FUN_100388800(long *param_1,long *param_2,long param_3,int param_4,int *param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  byte bVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
  (*DAT_1011c5768)(*(undefined4 *)(param_2[1] + 0x14));
  lVar2 = DAT_1011c8478;
  lVar7 = param_2[1];
  uVar1 = *(uint *)(lVar7 + 0x10);
  if (*(char *)(DAT_1011c8478 + 0x84) != '\0') {
    if (*param_5 == 2) {
      lVar7 = (ulong)(1 < uVar1) * 2;
    }
    else {
      lVar7 = (ulong)(1 < uVar1) * 2 + 1;
    }
    (*DAT_1011c5760)(uVar5,*(undefined4 *)((long)param_1 + lVar7 * 4 + 0xbc));
    goto LAB_1003889a0;
  }
  iVar12 = 0x14;
  if (*param_5 != 2) {
    iVar12 = 0;
  }
  if (*(int *)(lVar7 + 0x30) == iVar12) {
    cVar11 = *(char *)(lVar7 + 0x34);
    if ((bool)cVar11 != 1 < uVar1) goto LAB_1003888c2;
  }
  else {
LAB_1003888c2:
    cVar11 = 1 < uVar1;
    *(int *)(lVar7 + 0x30) = iVar12;
    *(bool *)(lVar7 + 0x34) = 1 < uVar1;
    *(byte *)(lVar7 + 0x74) = *(byte *)(lVar7 + 0x74) | 1;
  }
  if (*(uint *)(lVar7 + 0x70) != uVar1) {
    *(uint *)(lVar7 + 0x70) = uVar1;
    *(uint *)(lVar7 + 0x74) = *(uint *)(lVar7 + 0x74) | 0x201;
  }
  if ((*(float *)(lVar7 + 0x44) != 0.0) || (NAN(*(float *)(lVar7 + 0x44)))) {
    *(undefined4 *)(lVar7 + 0x44) = 0;
    *(byte *)(lVar7 + 0x74) = *(byte *)(lVar7 + 0x74) | 0x10;
  }
  if (*(char *)(lVar7 + 0x50) != '\0') {
    *(undefined1 *)(lVar7 + 0x50) = 0;
    *(byte *)(lVar7 + 0x74) = *(byte *)(lVar7 + 0x74) | 0x80;
  }
  if (*(char *)(lVar7 + 0x6c) != '\0') {
    *(undefined1 *)(lVar7 + 0x6c) = 0;
    *(byte *)(lVar7 + 0x75) = *(byte *)(lVar7 + 0x75) | 8;
  }
  if (1 < uVar1) {
    if (*(char *)(lVar2 + 0x2b) == '\0') {
      if (*(int *)(lVar7 + 0x24) != 0) {
        *(undefined4 *)(lVar7 + 0x24) = 0;
        *(byte *)(lVar7 + 0x2c) = *(byte *)(lVar7 + 0x2c) | 1;
      }
      iVar12 = uVar1 - 1;
    }
    else {
      if (cVar11 != '\0') {
        *(int *)(lVar7 + 0x30) = iVar12;
        *(undefined1 *)(lVar7 + 0x34) = 0;
        *(byte *)(lVar7 + 0x74) = *(byte *)(lVar7 + 0x74) | 1;
      }
      iVar12 = *(int *)((long)param_2 + 0x1c);
      if (*(int *)(lVar7 + 0x24) != iVar12) {
        *(int *)(lVar7 + 0x24) = iVar12;
        *(byte *)(lVar7 + 0x2c) = *(byte *)(lVar7 + 0x2c) | 1;
      }
    }
    if (*(int *)(lVar7 + 0x28) != iVar12) {
      *(int *)(lVar7 + 0x28) = iVar12;
      *(byte *)(lVar7 + 0x2c) = *(byte *)(lVar7 + 0x2c) | 2;
    }
  }
  FUN_100399630();
LAB_1003889a0:
  FUN_1003992d0(param_2[1]);
  (*DAT_1011c5770)(*(undefined4 *)((long)param_1 + 0x44));
  if (param_4 != 0) {
    iVar12 = 0;
    do {
      (**(code **)(*param_1 + 0x38))
                (param_1,*(undefined8 *)(param_3 + 8),*(int *)(param_3 + 0x18) + iVar12,
                 *(undefined4 *)(param_3 + 0x1c));
      lVar7 = *param_2;
      lVar2 = param_2[1];
      iVar10 = (int)param_2[3] + 0x8515;
      if (*(int *)(lVar2 + 0x14) != 0x8513) {
        iVar10 = *(int *)(lVar2 + 0x14);
      }
      bVar8 = (byte)*(undefined4 *)((long)param_2 + 0x1c);
      uVar3 = *(uint *)(lVar7 + 0xc) >> (bVar8 & 0x1f);
      if (*(uint *)(lVar7 + 0xc) >> (bVar8 & 0x1f) == 0) {
        uVar3 = 1;
      }
      uVar4 = *(uint *)(lVar7 + 0x10) >> (bVar8 & 0x1f);
      if (*(uint *)(lVar7 + 0x10) >> (bVar8 & 0x1f) == 0) {
        uVar4 = 1;
      }
      uVar6 = *(uint *)(lVar7 + 0x14) >> (bVar8 & 0x1f);
      if (*(uint *)(lVar7 + 0x14) >> (bVar8 & 0x1f) == 0) {
        uVar6 = 1;
      }
      (**(code **)(*param_1 + 0x28))
                (param_1,iVar10,*(undefined4 *)(lVar2 + 0x20),param_2[2],(int)param_2[3] + iVar12,
                 *(undefined4 *)((long)param_2 + 0x1c),uVar3,uVar4,uVar6,
                 (*(ushort *)(lVar7 + 0xb0) & 0x40) >> 6,(*(byte *)(lVar2 + 0xac) & 4) >> 2,
                 *(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),
                 *(int *)(param_3 + 0x18) + iVar12,*(undefined4 *)(param_3 + 0x1c),param_5,uVar5);
      (*DAT_1011c5be8)(5,0,4);
      iVar12 = iVar12 + 1;
    } while (param_4 != iVar12);
  }
  (*DAT_1011c5770)(0);
  uVar9 = extraout_RDX;
  if ((1 < uVar1) && (*(char *)(DAT_1011c8478 + 0x2b) != '\0')) {
    iVar12 = *(int *)(param_2[1] + 0x14);
    if (iVar12 != 0x84f5) {
      (*DAT_1011c6cd8)(iVar12,0x813d,*(int *)(param_2[1] + 0x10) + -1);
      uVar9 = extraout_RDX_00;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100388b7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5768)(*(undefined4 *)(param_2[1] + 0x14),0,uVar9,DAT_1011c5768);
  return;
}

