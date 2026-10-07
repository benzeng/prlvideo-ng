
undefined8 FUN_1007379c0(long *param_1,long *param_2,long *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  
  iVar12 = (int)param_2[1];
  lVar7 = (long)iVar12;
  if ((lVar7 == 0) || (iVar2 = (int)param_3[1], iVar2 == 0)) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    return 1;
  }
  FUN_1007353b0(param_4);
  if ((param_1 == param_2) || (plVar8 = param_1, param_1 == param_3)) {
    plVar8 = (long *)FUN_100735470(param_4);
    uVar15 = 0;
    if (plVar8 == (long *)0x0) goto LAB_100737cd0;
  }
  *(uint *)(plVar8 + 2) = *(uint *)(param_3 + 2) ^ *(uint *)(param_2 + 2);
  if ((iVar12 == 8) && (iVar2 == 8)) {
    if (*(int *)((long)plVar8 + 0xc) < 0x10) {
      lVar7 = FUN_10072d730(plVar8,0x10);
      uVar15 = 0;
      if (lVar7 == 0) goto LAB_100737cd0;
    }
    *(undefined4 *)(plVar8 + 1) = 0x10;
    FUN_100738020(*plVar8,*param_2,*param_3);
  }
  else {
    iVar16 = iVar2 + iVar12;
    if ((iVar12 < 0x10) || ((iVar2 < 0x10 || (iVar5 = iVar12 - iVar2, 2 < iVar5 + 1U)))) {
      if (*(int *)((long)plVar8 + 0xc) < iVar16) {
        lVar9 = FUN_10072d730(plVar8,iVar16);
        uVar15 = 0;
        if (lVar9 == 0) goto LAB_100737cd0;
      }
      *(int *)(plVar8 + 1) = iVar16;
      FUN_100739520(*plVar8,*param_2,lVar7,*param_3,iVar2);
    }
    else {
      if (iVar5 < 0) {
        cVar4 = '\0';
        if (iVar5 == -1) {
          lVar7 = (long)iVar2;
          goto LAB_100737b72;
        }
      }
      else {
LAB_100737b72:
        cVar4 = FUN_10072d8e0(lVar7);
      }
      iVar5 = 1 << (cVar4 - 1U & 0x1f);
      puVar10 = (undefined8 *)FUN_100735470(param_4);
      if ((iVar5 < iVar12) || (iVar5 < iVar2)) {
        iVar1 = iVar5 * 8;
        if (*(int *)((long)puVar10 + 0xc) < iVar1) {
          FUN_10072d730(puVar10,iVar1);
        }
        if (iVar1 - *(int *)((long)plVar8 + 0xc) != 0 && *(int *)((long)plVar8 + 0xc) <= iVar1) {
          FUN_10072d730(plVar8,iVar1);
        }
        FUN_100738ab0(*plVar8,*param_2,*param_3,iVar5,iVar12 - iVar5,iVar2 - iVar5,*puVar10);
      }
      else {
        iVar1 = iVar5 * 4;
        if (*(int *)((long)puVar10 + 0xc) < iVar1) {
          FUN_10072d730(puVar10,iVar1);
        }
        if (iVar1 - *(int *)((long)plVar8 + 0xc) != 0 && *(int *)((long)plVar8 + 0xc) <= iVar1) {
          FUN_10072d730(plVar8,iVar1);
        }
        FUN_100738fe0(*plVar8,*param_2,*param_3,iVar5,iVar12 - iVar5,iVar2 - iVar5,*puVar10);
      }
      *(int *)(plVar8 + 1) = iVar16;
    }
  }
  iVar12 = (int)plVar8[1];
  if (0 < (long)iVar12) {
    plVar11 = (long *)(*plVar8 + -8 + (long)iVar12 * 8);
    iVar12 = iVar12 + 1;
    do {
      if (*plVar11 != 0) break;
      plVar11 = plVar11 + -1;
      *(int *)(plVar8 + 1) = iVar12 + -2;
      iVar12 = iVar12 + -1;
    } while (1 < iVar12);
  }
  uVar15 = 1;
  if (plVar8 != param_1) {
    FUN_10072d5c0();
  }
LAB_100737cd0:
  if (*(int *)(param_4 + 0x34) == 0) {
    uVar6 = *(int *)(param_4 + 0x28) - 1;
    *(uint *)(param_4 + 0x28) = uVar6;
    uVar6 = *(uint *)(*(long *)(param_4 + 0x20) + (ulong)uVar6 * 4);
    uVar3 = *(uint *)(param_4 + 0x30);
    if (uVar6 <= uVar3 && uVar3 - uVar6 != 0) {
      iVar12 = *(int *)(param_4 + 0x18);
      uVar13 = uVar3 - uVar6;
      *(uint *)(param_4 + 0x18) = iVar12 - (uVar3 - uVar6);
      if (uVar13 != 0) {
        uVar14 = iVar12 + 0xfU & 0xf;
        if ((uVar13 & 1) != 0) {
          if (uVar14 == 0) {
            *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x180);
            uVar14 = 0xf;
          }
          else {
            uVar14 = uVar14 - 1;
          }
          uVar13 = uVar13 - 1;
        }
        if (uVar3 - 1 != uVar6) {
          do {
            if (uVar14 == 0) {
              *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x180);
              iVar12 = 0xf;
            }
            else {
              iVar12 = uVar14 - 1;
            }
            uVar13 = uVar13 - 2;
            if (iVar12 == 0) {
              *(undefined8 *)(param_4 + 8) = *(undefined8 *)(*(long *)(param_4 + 8) + 0x180);
              uVar14 = 0xf;
            }
            else {
              uVar14 = iVar12 - 1;
            }
          } while (uVar13 != 0);
        }
      }
    }
    *(uint *)(param_4 + 0x30) = uVar6;
    *(undefined4 *)(param_4 + 0x38) = 0;
  }
  else {
    *(int *)(param_4 + 0x34) = *(int *)(param_4 + 0x34) + -1;
  }
  return uVar15;
}

