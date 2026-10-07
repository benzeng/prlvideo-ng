
undefined4 FUN_100739f50(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined4 local_13c;
  undefined1 local_138 [256];
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar12 = (int)param_2[1];
  lVar14 = (long)iVar12;
  local_38 = lVar8;
  if (lVar14 < 1) {
    *(undefined4 *)(param_1 + 1) = 0;
    local_13c = 1;
    goto LAB_10073a25e;
  }
  FUN_1007353b0(param_3);
  plVar6 = param_1;
  if (param_2 == param_1) {
    plVar6 = (long *)FUN_100735470(param_3);
  }
  plVar7 = (long *)FUN_100735470(param_3);
  if (plVar6 == (long *)0x0) {
    local_13c = 0;
  }
  else if (plVar7 == (long *)0x0) {
    local_13c = 0;
  }
  else {
    local_13c = 0;
    iVar3 = iVar12 * 2;
    if (*(int *)((long)plVar6 + 0xc) < iVar3) {
      lVar8 = FUN_10072d730(plVar6,iVar3);
      if (lVar8 == 0) goto LAB_10073a17b;
    }
    if (iVar12 == 8) {
      FUN_10073a960(*plVar6,*param_2);
    }
    else if (iVar12 == 4) {
      FUN_10073a770(*plVar6,*param_2);
    }
    else {
      if (iVar12 < 0x10) {
        lVar8 = *plVar6;
        lVar13 = *param_2;
        puVar10 = local_138;
      }
      else {
        cVar4 = FUN_10072d8e0(lVar14);
        if (iVar12 == 1 << (cVar4 - 1U & 0x1f)) {
          if (*(int *)((long)plVar7 + 0xc) < iVar12 * 4) {
            lVar8 = FUN_10072d730(plVar7);
            if (lVar8 == 0) goto LAB_10073a17b;
          }
          FUN_10073b3e0(*plVar6,*param_2,iVar12,*plVar7);
          goto LAB_10073a129;
        }
        if (*(int *)((long)plVar7 + 0xc) < iVar3) {
          lVar8 = FUN_10072d730(plVar7,iVar3);
          if (lVar8 == 0) goto LAB_10073a17b;
        }
        lVar8 = *plVar6;
        lVar13 = *param_2;
        puVar10 = (undefined1 *)*plVar7;
      }
      FUN_10073b1a0(lVar8,lVar13,iVar12,puVar10);
    }
LAB_10073a129:
    *(undefined4 *)(plVar6 + 2) = 0;
    uVar2 = *(ulong *)(*param_2 + -8 + lVar14 * 8);
    iVar12 = -1;
    if (uVar2 != (uVar2 & 0xffffffff)) {
      iVar12 = 0;
    }
    *(int *)(plVar6 + 1) = iVar3 + iVar12;
    if (plVar6 == param_1) {
      local_13c = 1;
    }
    else {
      local_13c = 1;
      FUN_10072d5c0(param_1,plVar6);
    }
  }
LAB_10073a17b:
  if (*(int *)(param_3 + 0x34) == 0) {
    uVar5 = *(int *)(param_3 + 0x28) - 1;
    *(uint *)(param_3 + 0x28) = uVar5;
    uVar5 = *(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar5 * 4);
    uVar1 = *(uint *)(param_3 + 0x30);
    if (uVar5 <= uVar1 && uVar1 - uVar5 != 0) {
      iVar12 = *(int *)(param_3 + 0x18);
      uVar9 = uVar1 - uVar5;
      *(uint *)(param_3 + 0x18) = iVar12 - (uVar1 - uVar5);
      if (uVar9 != 0) {
        uVar11 = iVar12 + 0xfU & 0xf;
        if ((uVar9 & 1) != 0) {
          if (uVar11 == 0) {
            *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 0x180);
            uVar11 = 0xf;
          }
          else {
            uVar11 = uVar11 - 1;
          }
          uVar9 = uVar9 - 1;
        }
        if (uVar1 - 1 != uVar5) {
          do {
            if (uVar11 == 0) {
              *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 0x180);
              iVar12 = 0xf;
            }
            else {
              iVar12 = uVar11 - 1;
            }
            uVar9 = uVar9 - 2;
            if (iVar12 == 0) {
              *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 0x180);
              uVar11 = 0xf;
            }
            else {
              uVar11 = iVar12 - 1;
            }
          } while (uVar9 != 0);
        }
      }
    }
    *(uint *)(param_3 + 0x30) = uVar5;
    *(undefined4 *)(param_3 + 0x38) = 0;
  }
  else {
    *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + -1;
  }
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10073a25e:
  if (lVar8 == local_38) {
    return local_13c;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

