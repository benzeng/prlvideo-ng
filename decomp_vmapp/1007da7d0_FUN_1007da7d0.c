
long FUN_1007da7d0(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar15;
  long lVar16;
  ulong uVar14;
  
  iVar15 = *(int *)((long)param_1 + 0x24);
  bVar5 = 0xff;
  do {
    bVar5 = bVar5 + 1;
  } while (1 << (bVar5 & 0x1f) < (param_2 + -1 + iVar15) / iVar15);
  if ((int)param_1[5] < (int)(uint)bVar5) {
    return 0;
  }
  bVar6 = bVar5;
  while (lVar1 = *(long *)(param_1[3] + (ulong)bVar6 * 0x10),
        lVar1 == param_1[3] + (ulong)bVar6 * 0x10) {
    bVar6 = bVar6 + 1;
    if ((int)param_1[5] < (int)(uint)bVar6) {
      return 0;
    }
  }
  lVar9 = param_1[2];
  uVar11 = (ulong)(lVar1 - lVar9) >> 4;
  uVar10 = (uint)uVar11;
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  lVar16 = (long)(int)uVar10;
  lVar1 = param_1[1];
  bVar6 = *(byte *)(lVar1 + lVar16);
  uVar13 = (uint)bVar6;
  if ((uint)bVar5 <= (uint)bVar6 && (uint)bVar6 != (uint)bVar5) {
    do {
      if (bVar6 == 0) {
        pcVar8 = "ba_split_entry: negative entry %d";
        uVar14 = uVar11 & 0xffffffff;
LAB_1007da9cc:
        FUN_1008e3970("","Std",0,pcVar8,uVar14);
      }
      else {
        iVar15 = uVar13 - 1;
        if (((int)uVar10 < 0) || (*(int *)((long)param_1 + 0x2c) <= (int)uVar10)) {
          FUN_1008e3970("","Std",0,"ba_set_free: invalid entry %d",uVar11 & 0xffffffff);
        }
        else {
          *(char *)(lVar1 + lVar16) = (char)iVar15;
          lVar9 = param_1[2];
          lVar7 = lVar16 * 0x10;
          lVar1 = lVar9 + lVar7;
          lVar2 = *(long *)(lVar9 + lVar7);
          plVar3 = *(long **)(lVar9 + 8 + lVar7);
          *(long **)(lVar2 + 8) = plVar3;
          *plVar3 = lVar2;
          *(long *)(lVar9 + lVar7) = lVar1;
          lVar2 = param_1[3];
          lVar12 = (long)iVar15 * 0x10;
          lVar4 = *(long *)(lVar2 + lVar12);
          *(long *)(lVar4 + 8) = lVar1;
          *(long *)(lVar9 + lVar7) = lVar4;
          *(long *)(lVar9 + 8 + lVar7) = lVar2 + lVar12;
          *(long *)(lVar2 + lVar12) = lVar1;
        }
        uVar13 = 1 << (*(byte *)(param_1[1] + lVar16) & 0x1f) ^ uVar10;
        uVar14 = (ulong)uVar13;
        if (((int)uVar13 < 0) || (*(int *)((long)param_1 + 0x2c) <= (int)uVar13)) {
          pcVar8 = "ba_set_free: invalid entry %d";
          goto LAB_1007da9cc;
        }
        *(char *)(param_1[1] + (long)(int)uVar13) = (char)iVar15;
        lVar9 = param_1[2];
        lVar7 = (long)(int)uVar13 * 0x10;
        lVar1 = lVar9 + lVar7;
        lVar2 = *(long *)(lVar9 + lVar7);
        plVar3 = *(long **)(lVar9 + 8 + lVar7);
        *(long **)(lVar2 + 8) = plVar3;
        *plVar3 = lVar2;
        *(long *)(lVar9 + lVar7) = lVar1;
        lVar2 = param_1[3];
        lVar12 = (long)iVar15 * 0x10;
        lVar4 = *(long *)(lVar2 + lVar12);
        *(long *)(lVar4 + 8) = lVar1;
        *(long *)(lVar9 + lVar7) = lVar4;
        *(long *)(lVar9 + 8 + lVar7) = lVar2 + lVar12;
        *(long *)(lVar2 + lVar12) = lVar1;
      }
      lVar1 = param_1[1];
      bVar6 = *(byte *)(lVar1 + lVar16);
      uVar13 = (uint)bVar6;
    } while (bVar5 < uVar13);
    lVar9 = param_1[2];
    iVar15 = *(int *)((long)param_1 + 0x24);
  }
  lVar16 = lVar16 * 0x10;
  lVar1 = *(long *)(lVar9 + lVar16);
  plVar3 = *(long **)(lVar9 + 8 + lVar16);
  *(long **)(lVar1 + 8) = plVar3;
  *plVar3 = lVar1;
  *(long *)(lVar9 + lVar16) = lVar9 + lVar16;
  *(long *)(lVar9 + 8 + lVar16) = lVar9 + lVar16;
  return (long)(int)(iVar15 * uVar10) + *param_1;
}

