
undefined8 FUN_1003646f0(long param_1,ulong *param_2,char param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint *puVar11;
  char cVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  
  if ((param_2[0xc5] == 0) || (iVar4 = *(int *)(param_2[0xc5] + 0x1c0), iVar4 == 0)) {
    bVar22 = *(char *)(DAT_1011c8478 + 0x89) != '\0';
    iVar4 = 0xff;
    if (!bVar22) {
      iVar4 = 0;
    }
  }
  else {
    bVar22 = false;
  }
  iVar4 = FUN_100364d70(param_1,param_2,iVar4);
  puVar2 = *(ulong **)(param_1 + 0x90);
  uVar3 = param_2[1];
  *puVar2 = *puVar2 | *param_2;
  puVar2[1] = puVar2[1] | uVar3;
  *(uint *)(puVar2 + 2) = (uint)puVar2[2] | (uint)param_2[2];
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[1] = 0;
  *param_2 = 0;
  uVar21 = **(uint **)(param_1 + 0x90);
  cVar12 = '\x01';
  if ((uVar21 & 8) == 0) {
    cVar12 = (char)((uVar21 & 0x10) >> 4);
  }
  uVar3 = param_2[9];
  uVar18 = (*(uint **)(param_1 + 0x90))[1];
  if (uVar18 != 0) {
    if (*(uint *)(DAT_1011c8478 + 0x1c) < 2) {
      if ((uVar18 & 1) != 0) {
        pfVar6 = (float *)FUN_1003441b0(param_2,0);
        (*DAT_1011c72d0)((int)*pfVar6,(int)pfVar6[1],(long)pfVar6[2],(long)pfVar6[3]);
        (*DAT_1011c5ba8)(SUB84((double)pfVar6[4],0),(double)pfVar6[5]);
      }
    }
    else {
      uVar18 = (1 << ((byte)*(uint *)(DAT_1011c8478 + 0x1c) & 0x1f)) - 1U & uVar18;
      if (uVar18 != 0) {
        iVar20 = 0;
        do {
          if ((uVar18 & 1) != 0) {
            puVar5 = (undefined4 *)FUN_1003441b0(param_2,iVar20);
            (*DAT_1011c80c0)(*puVar5,iVar20);
            (*DAT_1011c7980)(SUB84((double)(float)puVar5[4],0),(double)(float)puVar5[5],iVar20);
          }
          iVar20 = iVar20 + 1;
          uVar18 = uVar18 >> 1;
        } while (uVar18 != 0);
      }
    }
  }
  uVar18 = *(uint *)(*(long *)(param_1 + 0x90) + 8);
  if (uVar18 != 0 || (uVar21 & 4) != 0) {
    if ((uVar3 == 0) || (*(int *)(uVar3 + 0x20) == 0)) {
      puVar7 = &DAT_1011c5bc0;
    }
    else {
      puVar7 = &DAT_1011c5c78;
    }
    (*(code *)*puVar7)(0xc11);
    if (uVar18 != 0) {
      if (*(uint *)(DAT_1011c8478 + 0x1c) < 2) {
        if ((uVar18 & 1) != 0) {
          piVar8 = (int *)FUN_100344270(param_2,0);
          (*DAT_1011c69c8)(*piVar8,piVar8[1],piVar8[2] - *piVar8,piVar8[3] - piVar8[1]);
        }
      }
      else {
        uVar18 = (1 << ((byte)*(uint *)(DAT_1011c8478 + 0x1c) & 0x1f)) - 1U & uVar18;
        if (uVar18 != 0) {
          iVar20 = 0;
          do {
            if ((uVar18 & 1) != 0) {
              piVar8 = (int *)FUN_100344270(param_2,iVar20);
              (*DAT_1011c7e78)(iVar20,*piVar8,piVar8[1],piVar8[2] - *piVar8,piVar8[3] - piVar8[1]);
            }
            iVar20 = iVar20 + 1;
            uVar18 = uVar18 >> 1;
          } while (uVar18 != 0);
        }
      }
    }
  }
  if ((uVar21 & 4) == 0) {
    if ((uVar3 == 0) || ((**(uint **)(param_1 + 0x90) & 0x10) == 0)) goto LAB_1003649b8;
  }
  else if (uVar3 == 0) goto LAB_1003649b8;
  uVar9 = FUN_100363490();
  if ((int)uVar9 != 0) {
    return uVar9;
  }
LAB_1003649b8:
  if (((**(ushort **)(param_1 + 0x90) & 0x116) != 0) && (uVar3 = param_2[7], uVar3 != 0)) {
    if ((param_2[0xc5] == 0) &&
       (((*(int *)(uVar3 + 8) == 0 && (*(char *)(uVar3 + 0x1d) == '\0')) &&
        (*(int *)(*(long *)(param_1 + 8) + 0x10) == 0)))) {
      puVar7 = &DAT_1011c5c78;
    }
    else {
      puVar7 = &DAT_1011c5bc0;
    }
    (*(code *)*puVar7)(0x8c89);
    if (((**(byte **)(param_1 + 0x90) & 0x12) != 0) && (uVar9 = FUN_1003636d0(), (int)uVar9 != 0)) {
      return uVar9;
    }
  }
  if (bVar22) {
    (*DAT_1011c5bc0)(0xbe2);
    (*DAT_1011c5970)(0,0,0,0);
  }
  else if ((((**(byte **)(param_1 + 0x90) & 1) != 0) ||
           (iVar4 != *(int *)(*(long *)(param_1 + 0xa8) + 0x1c))) &&
          (uVar9 = FUN_100363960(param_1,param_2,iVar4), (int)uVar9 != 0)) {
    return uVar9;
  }
  if (param_3 == '\0') {
    bVar22 = false;
  }
  else {
    bVar22 = param_2[0xca] != 0;
  }
  puVar11 = *(uint **)(param_1 + 0x90);
  uVar21 = *puVar11;
  if (((uVar21 & 0x10000) != 0) || (bVar22 != (bool)*(char *)(param_1 + 200))) {
    if (bVar22 == false) {
      puVar7 = &DAT_1011c5bc0;
    }
    else {
      puVar7 = &DAT_1011c5c78;
    }
    (*(code *)*puVar7)(0x8f9d);
    *(bool *)(param_1 + 200) = bVar22;
    puVar11 = *(uint **)(param_1 + 0x90);
    uVar21 = *puVar11;
  }
  if (((uVar21 & 0x2000) != 0) || (puVar11[4] != 0)) {
    uVar3 = param_2[0x4ea];
    uVar21 = 0;
    if (uVar3 != 0) {
      uVar18 = *(uint *)(uVar3 + 4);
      uVar16 = (ulong)uVar18;
      uVar21 = 0;
      if (uVar16 != 0) {
        uVar17 = 0;
        uVar21 = 0;
        uVar19 = 0;
        if (uVar18 != (uVar18 & 1)) {
          uVar17 = uVar16 - (uVar18 & 1);
          lVar14 = uVar16 - (uVar16 & 1);
          uVar21 = 0;
          lVar15 = 0x18;
          uVar19 = 0;
          do {
            uVar18 = *(uint *)(*(long *)(uVar3 + 8) + -0x10 + lVar15);
            uVar1 = *(uint *)(*(long *)(uVar3 + 8) + lVar15);
            uVar13 = 0;
            if (param_2[(ulong)uVar18 * 2 + 0x4e1] != 0) {
              uVar13 = 1 << ((byte)uVar18 & 0x1f);
            }
            uVar18 = 0;
            if (param_2[(ulong)uVar1 * 2 + 0x4e1] != 0) {
              uVar18 = 1 << ((byte)uVar1 & 0x1f);
            }
            uVar21 = uVar21 | uVar13;
            uVar19 = uVar19 | uVar18;
            lVar15 = lVar15 + 0x20;
            lVar14 = lVar14 + -2;
          } while (lVar14 != 0);
        }
        uVar21 = uVar21 | uVar19;
        if (uVar16 != uVar17) {
          uVar10 = uVar17 << 4 | 8;
          do {
            uVar18 = *(uint *)(*(long *)(uVar3 + 8) + uVar10);
            if (param_2[(ulong)uVar18 * 2 + 0x4e1] != 0) {
              uVar21 = uVar21 | 1 << ((byte)uVar18 & 0x1f);
            }
            uVar17 = uVar17 + 1;
            uVar10 = uVar10 + 0x10;
          } while (uVar17 < uVar16);
        }
      }
    }
    *(uint *)(param_2 + 0x4e9) = uVar21;
  }
  puVar11[4] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[0] = 0;
  puVar11[1] = 0;
  iVar20 = FUN_100376de0(*(undefined8 *)(param_1 + 0xb8),param_2,param_3);
  uVar9 = 3;
  if (iVar20 == 0) {
    uVar21 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x18);
    if (param_2[0xc4] == 0) {
      puVar11 = (uint *)(param_2[0xc3] + 0x1c8);
    }
    else {
      puVar11 = (uint *)(param_2[0xc4] + 0x1e0);
    }
    uVar18 = *puVar11;
    if (uVar21 < uVar18) {
      do {
        (*DAT_1011c5c78)(uVar21 + 0x3000);
        uVar21 = uVar21 + 1;
      } while (uVar18 != uVar21);
    }
    else {
      uVar19 = uVar18;
      if (uVar18 < uVar21) {
        do {
          (*DAT_1011c5bc0)(uVar19 + 0x3000);
          uVar19 = uVar19 + 1;
        } while (uVar21 != uVar19);
      }
    }
    iVar20 = FUN_100378150(*(undefined8 *)(param_1 + 0xb8),param_2,*(undefined8 *)(param_1 + 0x38));
    uVar9 = 5;
    if (iVar20 == 0) {
      FUN_10039d5e0(*(undefined8 *)(param_1 + 0xa0),param_2,**(undefined8 **)(param_1 + 0xb8));
      (**(code **)(**(long **)(param_1 + 0x28) + 0x28))();
      if ((cVar12 != '\0') || (lVar14 = *(long *)(param_1 + 0xa8), iVar4 != *(int *)(lVar14 + 0x1c))
         ) {
        FUN_100386ae0(*(undefined8 *)(param_1 + 0x98),param_2,iVar4);
        lVar14 = *(long *)(param_1 + 0xa8);
      }
      *(uint *)(lVar14 + 0x18) = uVar18;
      *(int *)(lVar14 + 0x1c) = iVar4;
      uVar9 = 0;
    }
  }
  return uVar9;
}

