
undefined8 FUN_100dab540(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  int *piVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  char local_238 [512];
  long local_38;
  
  lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar6 = *(uint *)((long)param_1 + 0x1c);
  local_38 = lVar10;
  if (((uVar6 & 1) == 0) || (param_1[0x45] == 0)) {
LAB_100dab6e4:
    if (((uVar6 & 1) == 0) || (param_1[0x44] == 0)) {
LAB_100dab857:
      FUN_100daa6a0(param_1);
      iVar4 = (**(code **)(*param_1 + 0x18))(param_1[2],param_1 + 4,0x200);
      uVar11 = 0xffffffff;
      if (iVar4 == -1) goto LAB_100dab898;
      if (iVar4 == 0x200) {
        uVar11 = 0;
        goto LAB_100dab898;
      }
    }
    else {
      uVar2 = *(undefined1 *)((long)param_1 + 0xbc);
      lVar1 = (long)param_1 + 0x9c;
      uVar3 = FUN_100da9450(lVar1);
      *(undefined1 *)((long)param_1 + 0xbc) = 0x4c;
      sVar7 = _strlen((char *)param_1[0x44]);
      FUN_100da9480(sVar7 & 0xffffffff,lVar1,0xc);
      FUN_100daa6a0(param_1);
      iVar4 = (**(code **)(*param_1 + 0x18))(param_1[2],param_1 + 4,0x200);
      uVar11 = 0xffffffff;
      if (iVar4 == -1) goto LAB_100dab898;
      if (iVar4 == 0x200) {
        pcVar9 = (char *)param_1[0x44];
        for (iVar4 = (uint)((sVar7 & 0x1ff) != 0) +
                     ((int)(((uint)((int)sVar7 >> 0x1f) >> 0x17) + (int)sVar7) >> 9); 1 < iVar4;
            iVar4 = iVar4 + -1) {
          iVar5 = (**(code **)(*param_1 + 0x18))(param_1[2],pcVar9,0x200);
          if (iVar5 != 0x200) {
            if (iVar5 == -1) {
              lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
            }
            else {
LAB_100dab8d7:
              uVar11 = 0xffffffff;
              piVar8 = ___error();
              *piVar8 = 0x16;
              lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
            }
            goto LAB_100dab898;
          }
          pcVar9 = pcVar9 + 0x200;
        }
        ___bzero(local_238,0x200);
        _strncpy(local_238,pcVar9,0x200);
        iVar4 = (**(code **)(*param_1 + 0x18))(param_1[2],local_238,0x200);
        if (iVar4 == -1) {
          lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
          goto LAB_100dab898;
        }
        lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
        if (iVar4 == 0x200) {
          *(undefined1 *)((long)param_1 + 0xbc) = uVar2;
          FUN_100da9480(uVar3,lVar1,0xc);
          goto LAB_100dab857;
        }
      }
    }
  }
  else {
    uVar2 = *(undefined1 *)((long)param_1 + 0xbc);
    lVar1 = (long)param_1 + 0x9c;
    uVar3 = FUN_100da9450(lVar1);
    *(undefined1 *)((long)param_1 + 0xbc) = 0x4b;
    sVar7 = _strlen((char *)param_1[0x45]);
    FUN_100da9480(sVar7 & 0xffffffff,lVar1,0xc);
    FUN_100daa6a0(param_1);
    iVar4 = (**(code **)(*param_1 + 0x18))(param_1[2],param_1 + 4,0x200);
    uVar11 = 0xffffffff;
    if (iVar4 == -1) goto LAB_100dab898;
    if (iVar4 == 0x200) {
      pcVar9 = (char *)param_1[0x45];
      for (iVar4 = (uint)((sVar7 & 0x1ff) != 0) +
                   ((int)(((uint)((int)sVar7 >> 0x1f) >> 0x17) + (int)sVar7) >> 9); 1 < iVar4;
          iVar4 = iVar4 + -1) {
        iVar5 = (**(code **)(*param_1 + 0x18))(param_1[2],pcVar9,0x200);
        if (iVar5 != 0x200) {
          if (iVar5 != -1) goto LAB_100dab8d7;
          lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
          goto LAB_100dab898;
        }
        pcVar9 = pcVar9 + 0x200;
      }
      ___bzero(local_238,0x200);
      _strncpy(local_238,pcVar9,0x200);
      iVar4 = (**(code **)(*param_1 + 0x18))(param_1[2],local_238,0x200);
      if (iVar4 == -1) {
        lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
        goto LAB_100dab898;
      }
      lVar10 = *(long *)PTR____stack_chk_guard_1021e1840;
      if (iVar4 == 0x200) {
        *(undefined1 *)((long)param_1 + 0xbc) = uVar2;
        FUN_100da9480(uVar3,lVar1,0xc);
        uVar6 = *(uint *)((long)param_1 + 0x1c);
        goto LAB_100dab6e4;
      }
    }
  }
  uVar11 = 0xffffffff;
  piVar8 = ___error();
  *piVar8 = 0x16;
LAB_100dab898:
  if (lVar10 == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

