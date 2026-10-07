
void FUN_10038b200(long *param_1,long param_2,int *param_3,uint param_4,int param_5,
                  undefined4 param_6,undefined4 *param_7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ulong *puVar4;
  char cVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  uVar9 = (ulong)param_4;
  uVar10 = *(uint *)(param_2 + 8);
  if (uVar10 == 0x23) {
    lVar8 = 0;
    if (1 < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3)) {
      lVar8 = *(long *)(*(long *)(param_2 + 0x40) + 8);
    }
  }
  else {
    lVar8 = 0;
    if ((*(ushort *)(param_2 + 0xb0) & 1) != 0) {
      uVar9 = 0;
    }
    if (uVar9 < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3)) {
      lVar8 = *(long *)(*(long *)(param_2 + 0x40) + uVar9 * 8);
    }
    if ((int)uVar10 < 0x66) {
      if (8 < uVar10) goto LAB_10038b2d7;
      uVar7 = 0x10a;
    }
    else {
      uVar10 = uVar10 - 0x66;
      if (0xc < uVar10) goto LAB_10038b2d7;
      uVar7 = 0x1015;
    }
    if ((uVar7 >> (uVar10 & 0x1f) & 1) != 0) {
      (*DAT_1011c5bc0)(0x8db9);
      puVar4 = (ulong *)param_1[0x1b];
      *puVar4 = *puVar4 | *(ulong *)(*(long *)puVar4[1] + 0x610);
    }
  }
LAB_10038b2d7:
  if (param_3 == (int *)0x0) {
    (*DAT_1011c5bc0)(0xc11);
  }
  else {
    (*DAT_1011c5c78)(0xc11);
    iVar2 = *param_3;
    iVar3 = param_3[1];
    if (*(uint *)(DAT_1011c8478 + 0x1c) < 2) {
      (*DAT_1011c69c8)(iVar2,iVar3,param_3[2] - iVar2,param_3[3] - iVar3);
    }
    else {
      (*DAT_1011c7e78)(0,iVar2,iVar3,param_3[2] - iVar2,param_3[3] - iVar3);
    }
  }
  (*DAT_1011c5970)(1,1,1,1);
  cVar5 = FUN_10038e310(*(undefined4 *)(lVar8 + 0x1c));
  if (cVar5 == '\0') {
    cVar5 = FUN_10038e320(*(undefined4 *)(lVar8 + 0x1c));
    uVar14 = param_7[3];
    if (cVar5 == '\0') {
      uVar11 = *param_7;
      uVar12 = param_7[1];
      uVar13 = param_7[2];
    }
    else {
      uVar12 = 0;
      uVar13 = 0;
      uVar11 = uVar14;
      uVar14 = 0;
    }
    (*DAT_1011c5830)(uVar11,uVar12,uVar13,uVar14);
  }
  else {
    (*DAT_1011c5830)(*param_7,param_7[3],0,0);
  }
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  if (param_4 < param_5 + param_4) {
    uVar10 = 1 << ((byte)param_6 & 0x1f);
    uVar9 = (ulong)param_4;
    do {
      (**(code **)(*param_1 + 0x38))(param_1,lVar8,uVar9 & 0xffffffff,param_6);
      (*DAT_1011c5820)(0x4000);
      uVar6 = 0;
      if (*(int *)(param_2 + 0x24) != 5) {
        uVar6 = uVar9;
      }
      puVar1 = (uint *)(*(long *)(lVar8 + 0x88) + uVar6 * 4);
      *puVar1 = *puVar1 | uVar10;
      puVar1 = (uint *)(*(long *)(param_2 + 0x90) + uVar6 * 4);
      *puVar1 = *puVar1 & ~uVar10;
      uVar9 = uVar9 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *(undefined1 *)(param_2 + 0xd0) = 0;
  puVar4 = (ulong *)param_1[0x1b];
  lVar8 = *(long *)puVar4[1];
  uVar9 = *puVar4 | *(ulong *)(lVar8 + 0x570);
  *puVar4 = uVar9;
  *puVar4 = uVar9 | *(ulong *)(lVar8 + 0x540);
  return;
}

