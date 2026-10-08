
bool FUN_100bb3c30(uint *param_1,long *param_2,long param_3)

{
  uint *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  long *local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  long local_48 [3];
  
  local_48[2] = *(long *)PTR____stack_chk_guard_1021e1840;
  FUN_100bb4190(param_3);
  puVar5 = (undefined8 *)FUN_100bb4250(param_3);
  bVar12 = false;
  if (puVar5 == (undefined8 *)0x0) goto LAB_100bb3f1d;
  lVar6 = FUN_100bac3a0(param_1 + 8,param_2);
  if (lVar6 == 0) goto LAB_100bb3f1d;
  param_1[0xc] = 0;
  iVar3 = (int)param_2[1];
  uVar8 = 0;
  if ((long)iVar3 != 0) {
    iVar11 = (iVar3 + -1) * 0x40;
    iVar3 = FUN_100bac6c0(*(undefined8 *)(*param_2 + -8 + (long)iVar3 * 8));
    uVar8 = ((uint)(iVar3 + 0x3f + iVar11 >> 0x1f) >> 0x1a) + 0x3f + iVar3 + iVar11 & 0xffffffc0;
  }
  uVar4 = 0;
  puVar1 = param_1 + 2;
  *param_1 = uVar8;
  param_1[4] = 0;
  param_1[6] = 0;
  if ((int)param_1[5] < 2) {
    lVar6 = FUN_100bac510(puVar1,2);
    bVar12 = false;
    if (lVar6 == 0) goto LAB_100bb3f1d;
    uVar4 = param_1[4];
    if ((int)uVar4 < 2) goto LAB_100bb3d1e;
  }
  else {
LAB_100bb3d1e:
    ___bzero(*(long *)puVar1 + (long)(int)uVar4 * 8,(ulong)(1 - uVar4) * 8 + 8);
  }
  param_1[4] = 2;
  *(ulong *)(*(long *)(param_1 + 2) + 8) = *(ulong *)(*(long *)(param_1 + 2) + 8) | 1;
  local_48[0] = *(long *)*param_2;
  local_48[1] = 0;
  local_60 = local_48;
  local_58 = (uint)(local_48[0] != 0);
  local_54 = 2;
  local_50 = 0;
  lVar6 = FUN_100bb4520(puVar5,puVar1,&local_60,param_3);
  bVar12 = false;
  if ((lVar6 != 0) && (iVar3 = FUN_100bb5160(puVar5,puVar5,0x40), iVar3 != 0)) {
    if (*(int *)(puVar5 + 1) == 0) {
      if ((*(int *)((long)puVar5 + 0xc) < 1) && (lVar6 = FUN_100bac510(puVar5,1), lVar6 == 0))
      goto LAB_100bb3f1d;
      *(undefined4 *)(puVar5 + 2) = 0;
      *(undefined8 *)*puVar5 = 0xffffffffffffffff;
      *(undefined4 *)(puVar5 + 1) = 1;
    }
    else {
      iVar3 = FUN_100bb53b0(puVar5,1);
      if (iVar3 == 0) goto LAB_100bb3f1d;
    }
    bVar12 = false;
    iVar3 = FUN_100bb54a0(puVar5,0,puVar5,&local_60,param_3);
    if (iVar3 != 0) {
      bVar12 = false;
      uVar7 = 0;
      if (0 < *(int *)(puVar5 + 1)) {
        uVar7 = *(undefined8 *)*puVar5;
      }
      *(undefined8 *)(param_1 + 0x14) = uVar7;
      param_1[4] = 0;
      param_1[6] = 0;
      uVar8 = *param_1;
      if (-1 < (int)uVar8) {
        iVar3 = (int)(((uint)((int)uVar8 >> 0x1f) >> 0x1b) + uVar8) >> 5;
        uVar4 = 0;
        if ((int)param_1[5] <= iVar3) {
          lVar6 = FUN_100bac510(puVar1);
          bVar12 = false;
          if (lVar6 == 0) goto LAB_100bb3f1d;
          uVar4 = param_1[4];
        }
        if ((int)uVar4 < (int)(iVar3 + 1U)) {
          ___bzero(*(long *)puVar1 + (long)(int)uVar4 * 8,(ulong)(iVar3 - uVar4) * 8 + 8);
        }
        param_1[4] = iVar3 + 1U;
        puVar2 = (ulong *)(*(long *)(param_1 + 2) + (long)iVar3 * 8);
        *puVar2 = *puVar2 | 1L << ((char)uVar8 * '\x02' & 0x3fU);
        iVar3 = FUN_100bb54a0(0,puVar1,puVar1,param_1 + 8,param_3);
        bVar12 = iVar3 != 0;
      }
    }
  }
LAB_100bb3f1d:
  if (*(int *)(param_3 + 0x34) == 0) {
    uVar8 = *(int *)(param_3 + 0x28) - 1;
    *(uint *)(param_3 + 0x28) = uVar8;
    uVar8 = *(uint *)(*(long *)(param_3 + 0x20) + (ulong)uVar8 * 4);
    uVar4 = *(uint *)(param_3 + 0x30);
    if (uVar8 <= uVar4 && uVar4 - uVar8 != 0) {
      iVar3 = *(int *)(param_3 + 0x18);
      uVar9 = uVar4 - uVar8;
      *(uint *)(param_3 + 0x18) = iVar3 - (uVar4 - uVar8);
      if (uVar9 != 0) {
        uVar10 = iVar3 + 0xfU & 0xf;
        if ((uVar9 & 1) != 0) {
          if (uVar10 == 0) {
            *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 0x180);
            uVar10 = 0xf;
          }
          else {
            uVar10 = uVar10 - 1;
          }
          uVar9 = uVar9 - 1;
        }
        if (uVar4 - 1 != uVar8) {
          do {
            if (uVar10 == 0) {
              *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 0x180);
              iVar3 = 0xf;
            }
            else {
              iVar3 = uVar10 - 1;
            }
            uVar9 = uVar9 - 2;
            if (iVar3 == 0) {
              *(undefined8 *)(param_3 + 8) = *(undefined8 *)(*(long *)(param_3 + 8) + 0x180);
              uVar10 = 0xf;
            }
            else {
              uVar10 = iVar3 - 1;
            }
          } while (uVar9 != 0);
        }
      }
    }
    *(uint *)(param_3 + 0x30) = uVar8;
    *(undefined4 *)(param_3 + 0x38) = 0;
  }
  else {
    *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + -1;
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_48[2]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar12;
}

