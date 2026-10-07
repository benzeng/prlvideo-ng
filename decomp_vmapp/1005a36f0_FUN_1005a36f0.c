
long * FUN_1005a36f0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_58 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_60 = (QArrayData *)*param_2;
  if (1 < *(int *)local_60 + 1U) {
    LOCK();
    *(int *)local_60 = *(int *)local_60 + 1;
    local_49 = *(int *)local_60 != 0;
    UNLOCK();
  }
  local_38 = lVar3;
  QString::remove((int)&local_60,0);
  iVar4 = FUN_100786560(&local_60,&local_58);
  plVar1 = param_1 + 1;
  plVar8 = plVar1;
  if (-1 < iVar4) {
    FUN_1007d6920(local_48,&local_58);
    if ((long *)*param_1 != plVar1) {
      plVar6 = (long *)*param_1;
      do {
        iVar4 = FUN_1007ea6f0(plVar6 + 0xb,local_48);
        if (iVar4 == 0) goto LAB_1005a386d;
        plVar7 = (long *)plVar6[1];
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar6[2];
            bVar10 = (long *)*plVar8 != plVar6;
            plVar6 = plVar8;
          } while (bVar10);
        }
        else {
          do {
            plVar8 = plVar7;
            plVar7 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
        plVar6 = plVar8;
      } while (plVar8 != plVar1);
    }
  }
  uVar5 = FUN_10059f480(param_2);
  plVar6 = plVar8;
  if (uVar5 != 0xffffffff) {
    plVar8 = (long *)*plVar1;
    if (plVar8 == (long *)0x0) {
LAB_1005a386a:
      plVar6 = plVar1;
    }
    else {
      plVar7 = plVar8;
      plVar9 = plVar1;
      do {
        while (plVar6 = plVar7, (uVar5 ^ 0x80000000) <= *(uint *)(plVar6 + 4)) {
          plVar7 = (long *)*plVar6;
          plVar9 = plVar6;
          if ((long *)*plVar6 == (long *)0x0) goto LAB_1005a3820;
        }
        plVar2 = plVar6 + 1;
        plVar6 = plVar9;
        plVar7 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
LAB_1005a3820:
      plVar7 = plVar1;
      if ((plVar6 == plVar1) || ((uVar5 ^ 0x80000000) < *(uint *)(plVar6 + 4))) {
        do {
          while (plVar6 = plVar8, uVar5 <= *(uint *)(plVar6 + 4)) {
            plVar8 = (long *)*plVar6;
            plVar7 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_1005a3860;
          }
          plVar9 = plVar6 + 1;
          plVar6 = plVar7;
          plVar8 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
LAB_1005a3860:
        if ((plVar6 == plVar1) || (uVar5 < *(uint *)(plVar6 + 4))) goto LAB_1005a386a;
      }
    }
  }
LAB_1005a386d:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_49 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005a389d;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1005a389d:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_1005a38cd;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005a38cd:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar6;
}

