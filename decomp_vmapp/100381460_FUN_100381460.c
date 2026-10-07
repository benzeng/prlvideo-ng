
void FUN_100381460(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  undefined4 local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  uint local_54;
  int local_50 [4];
  undefined8 local_40;
  undefined4 local_38;
  
  pcVar5 = DAT_1011c7ec8;
  pcVar4 = DAT_1011c7ec0;
  uVar12 = *(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40);
  uVar11 = (ulong)((int)(uVar12 >> 3) - 1);
  lVar13 = 0;
  if (uVar11 < (ulong)((long)uVar12 >> 3)) {
    lVar13 = *(long *)(*(long *)(param_2 + 0x40) + uVar11 * 8);
  }
  iVar1 = *(int *)(lVar13 + 0x10);
  uVar2 = *(uint *)(lVar13 + 0x14);
  iVar8 = *(int *)(param_2 + 0x24);
  if ((iVar8 == 1) && (*(char *)(param_2 + 0xb4) == '\0')) {
    if (*(undefined4 **)(param_2 + 0x58) == (undefined4 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001003816f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_1011c7728)(uVar2,*(undefined4 *)(lVar13 + 0x18),**(undefined4 **)(param_2 + 0x58),
                     DAT_1011c7728);
    return;
  }
  iVar15 = *(int *)(lVar13 + 0x20);
  if (((*(char *)(DAT_1011c8478 + 0x85) == '\0') ||
      ((((iVar15 - 0x1bU < 0x3c &&
         ((0xc20000000000001U >> ((ulong)(iVar15 - 0x1bU) & 0x3f) & 1) != 0)) || (uVar2 == 0x806f))
       || ((1 < *(uint *)(param_2 + 0x20) || (*(char *)(param_2 + 0xb4) != '\0')))))) ||
     ((iVar15 - 0x57U < 9 && (2 < (long)(int)(iVar15 - 0x57U) - 4U)))) {
    uVar10 = (uint)(iVar8 == 6) * 5 + 1;
    if (iVar8 == 10) {
      uVar10 = 1;
    }
    local_38 = *(undefined4 *)(param_2 + 0x20);
    local_50[1] = 0;
    local_50[2] = 0;
    local_40 = 0;
    local_50[0] = iVar15;
    if (iVar1 != 0) {
      iVar15 = 0;
      while( true ) {
        bVar14 = (byte)iVar15;
        uVar6 = *(uint *)(param_2 + 0xc) >> (bVar14 & 0x1f);
        if (*(uint *)(param_2 + 0xc) >> (bVar14 & 0x1f) == 0) {
          uVar6 = 1;
        }
        if (iVar8 == 7) {
          uVar7 = FUN_10032df20(param_2);
          iVar8 = *(int *)(param_2 + 0x24);
        }
        else {
          uVar7 = *(uint *)(param_2 + 0x10) >> (bVar14 & 0x1f);
          if (*(uint *)(param_2 + 0x10) >> (bVar14 & 0x1f) == 0) {
            uVar7 = 1;
          }
        }
        if (iVar8 - 8U < 3) {
          local_54 = FUN_10032df20(param_2);
          iVar8 = *(int *)(param_2 + 0x24);
        }
        else {
          local_54 = *(uint *)(param_2 + 0x14) >> (bVar14 & 0x1f);
          if (*(uint *)(param_2 + 0x14) >> (bVar14 & 0x1f) == 0) {
            local_54 = 1;
          }
        }
        local_68 = 0;
        local_64 = 0;
        local_58 = 0;
        uVar16 = 0;
        local_60 = uVar6;
        local_5c = uVar7;
        if (iVar8 == 1) {
          local_60 = *(uint *)(lVar13 + 0x78);
          if (local_60 == 0) {
            local_60 = 1;
          }
          FUN_10038e3f0(&local_68);
          local_50[2] = local_5c - local_64;
        }
        do {
          iVar8 = uVar16 + 0x8515;
          if (*(int *)(lVar13 + 0x14) != 0x8513) {
            iVar8 = *(int *)(lVar13 + 0x14);
          }
          FUN_1003818b0(uVar10,&local_68,iVar8,iVar15,*(undefined4 *)(lVar13 + 0x18),local_50);
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar10);
        iVar15 = iVar15 + 1;
        if (iVar15 == iVar1) break;
        iVar8 = *(int *)(param_2 + 0x24);
      }
    }
  }
  else if ((int)uVar2 < 0x84f5) {
    if (uVar2 == 0xde0) {
      iVar8 = 1;
      if (*(int *)(param_2 + 0xc) != 0) {
        iVar8 = *(int *)(param_2 + 0xc);
      }
      (*DAT_1011c7eb8)(0xde0,iVar1,*(undefined4 *)(lVar13 + 0x18),iVar8);
      goto LAB_100381836;
    }
    if (uVar2 == 0xde1) goto LAB_100381757;
  }
  else if ((int)uVar2 < 0x9009) {
    if ((int)uVar2 < 0x8c18) {
      if ((uVar2 == 0x84f5) || (uVar2 == 0x8513)) {
LAB_100381757:
        uVar3 = *(undefined4 *)(lVar13 + 0x18);
        iVar15 = *(int *)(param_2 + 0xc);
        if (iVar15 == 0) {
          iVar15 = 1;
        }
        if (iVar8 == 7) {
          iVar8 = FUN_10032df20();
        }
        else {
          iVar8 = 1;
          if (*(int *)(param_2 + 0x10) != 0) {
            iVar8 = *(int *)(param_2 + 0x10);
          }
        }
        (*pcVar4)(uVar2,iVar1,uVar3,iVar15,iVar8);
      }
    }
    else {
      if (uVar2 == 0x8c18) goto LAB_100381757;
      if (uVar2 == 0x8c1a) goto LAB_1003817ae;
    }
  }
  else if (uVar2 == 0x9009) {
LAB_1003817ae:
    uVar3 = *(undefined4 *)(lVar13 + 0x18);
    iVar15 = *(int *)(param_2 + 0xc);
    if (iVar15 == 0) {
      iVar15 = 1;
    }
    if (iVar8 == 7) {
      iVar9 = FUN_10032df20(param_2);
      iVar8 = *(int *)(param_2 + 0x24);
    }
    else {
      iVar9 = 1;
      if (*(int *)(param_2 + 0x10) != 0) {
        iVar9 = *(int *)(param_2 + 0x10);
      }
    }
    if (iVar8 - 8U < 3) {
      iVar8 = FUN_10032df20(param_2);
    }
    else {
      iVar8 = 1;
      if (*(int *)(param_2 + 0x14) != 0) {
        iVar8 = *(int *)(param_2 + 0x14);
      }
    }
    (*pcVar5)(uVar2,iVar1,uVar3,iVar15,iVar9,iVar8);
  }
  if ((uVar2 & 0xfffffffd) == 0x9100) {
    return;
  }
LAB_100381836:
  (*DAT_1011c6cd8)(uVar2,0x8072,0x812f);
  (*DAT_1011c6cd8)(uVar2,0x2802,0x812f);
  (*DAT_1011c6cd8)(uVar2,0x2803,0x812f);
  (*DAT_1011c6cd8)(uVar2,0x2801,0x2600);
  (*DAT_1011c6cd8)(uVar2,0x813c,0);
  (*DAT_1011c6cd8)(uVar2,0x813d,iVar1 + -1);
  return;
}

