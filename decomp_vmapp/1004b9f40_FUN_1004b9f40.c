
undefined8 FUN_1004b9f40(undefined8 param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  double *pdVar6;
  int *piVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *puVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  double local_50;
  double local_48;
  double local_40 [3];
  long local_28;
  
  puVar10 = auStack_58;
  lVar4 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_40[2] = 0.0;
  local_28 = lVar4;
  if ((*(uint *)(param_2 + 0x48) & 0x40) == 0) {
    if (*(long *)(param_2 + 0x68) != 0) {
      uVar1 = *(uint *)(param_2 + 0x4c);
      uVar12 = (ulong)uVar1;
      if (((*(uint *)(param_2 + 0x48) & 0x100000) == 0) || (uVar1 != 1)) {
        puVar10 = auStack_58 + uVar12 * -0x20;
        uVar5 = 0;
        if (uVar1 != 0) {
          iVar2 = *(int *)(param_2 + 0x58);
          iVar3 = *(int *)(param_2 + 0x5c);
          iVar13 = *(int *)(param_2 + 0x60) - iVar2;
          iVar14 = *(int *)(param_2 + 100) - iVar3;
          pdVar6 = local_40 + uVar12 * -4;
          piVar7 = (int *)(*(long *)(param_2 + 0x68) + 0xc);
          uVar9 = 0;
          do {
            iVar8 = piVar7[-3];
            pdVar6[-3] = (double)(iVar8 + iVar2);
            pdVar6[-2] = (double)(piVar7[-2] + iVar3);
            iVar11 = piVar7[-1];
            if (iVar13 <= piVar7[-1]) {
              iVar11 = iVar13;
            }
            pdVar6[-1] = (double)(iVar11 - iVar8);
            iVar8 = *piVar7;
            if (iVar14 <= *piVar7) {
              iVar8 = iVar14;
            }
            *pdVar6 = (double)(iVar8 - piVar7[-2]);
            uVar9 = uVar9 + 1;
            pdVar6 = pdVar6 + 4;
            piVar7 = piVar7 + 4;
            uVar5 = uVar1;
          } while (uVar9 < uVar12);
        }
        *(undefined8 *)(auStack_58 + uVar12 * -0x20 + -8) = 0x1004ba0a6;
        (*DAT_1011ccc58)(puVar10,uVar5,local_40 + 2);
        goto LAB_1004ba0a6;
      }
    }
    local_50 = (double)*(int *)(param_2 + 0x58);
    local_48 = (double)*(int *)(param_2 + 0x5c);
    local_40[0] = (double)(*(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x58));
    local_40[1] = (double)(*(int *)(param_2 + 100) - *(int *)(param_2 + 0x5c));
    uStack_60 = 0x1004b9fd2;
    (*DAT_1011ccc50)(&local_50,local_40 + 2);
    puVar10 = auStack_58;
  }
  else {
    uStack_60 = 0x1004b9fe4;
    (*DAT_1011ccc70)(local_40 + 2);
  }
LAB_1004ba0a6:
  if (lVar4 != local_28) {
                    /* WARNING: Subroutine does not return */
    *(code **)(puVar10 + -8) = FUN_1004ba0c0;
    ___stack_chk_fail();
  }
  return local_40[2];
}

