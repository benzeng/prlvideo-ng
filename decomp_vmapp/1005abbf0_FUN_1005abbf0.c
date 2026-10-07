
undefined8 FUN_1005abbf0(undefined8 *param_1,int param_2,long *param_3,ulong param_4,long *param_5)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  QMutex::lock();
  bVar11 = true;
  plVar6 = param_3 + 1;
  if (param_2 == -1) {
    plVar6 = param_3;
  }
  lVar7 = *plVar6;
  uVar10 = 0x80022003;
  if (lVar7 == 0) {
LAB_1005abd61:
    lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    lVar1 = param_3[4];
    if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x30) != 0)) {
      piVar8 = (int *)(lVar1 + 0x18);
      uVar9 = 0;
      do {
        if (*piVar8 == param_2) goto LAB_1005abd61;
        uVar9 = uVar9 + 1;
        piVar8 = piVar8 + 4;
      } while (uVar9 < *(uint *)(lVar1 + 0x30));
    }
    lVar5 = (param_4 / *(uint *)((long)param_1 + 0x1c) & 0xfff) * 0x20;
    param_5[3] = *(long *)(lVar7 + 0x18 + lVar5);
    param_5[2] = *(long *)(lVar7 + 0x10 + lVar5);
    lVar1 = *(long *)(lVar7 + lVar5);
    param_5[1] = *(long *)(lVar7 + 8 + lVar5);
    *param_5 = lVar1;
    plVar6 = param_3 + 5;
    plVar2 = (long *)param_3[5];
    if (plVar2 != plVar6) {
      puVar3 = (undefined8 *)param_3[6];
      plVar2[1] = (long)puVar3;
      *puVar3 = plVar2;
      lVar7 = param_1[4];
      *(long **)(lVar7 + 8) = plVar6;
      param_3[5] = lVar7;
      param_3[6] = (long)(param_1 + 4);
      param_1[4] = plVar6;
    }
    bVar11 = false;
    QMutex::unlock();
    if (*(int *)((long)param_5 + 0xc) == -2) {
      iVar4 = FUN_1005aba60(param_1,param_4,local_5c);
      if (iVar4 != -1) {
        plVar6 = (long *)(**(code **)(*(long *)*param_1 + 0x308))((long *)*param_1,iVar4);
        lVar7 = (**(code **)(*plVar6 + 0x18))(plVar6);
        *(int *)((long)param_5 + 0xc) = iVar4;
        *(undefined4 *)(param_5 + 1) = 0;
        uVar10 = 0;
        *param_5 = (param_4 - lVar7) - param_4 % (ulong)*(uint *)((long)param_1 + 0x1c);
        goto LAB_1005abd61;
      }
      local_50 = 0xffffffffffffffff;
      local_58 = 0xffffffffffffffff;
      local_40 = 0;
      local_48 = 0;
      param_5[3] = 0;
      param_5[2] = 0;
      param_5[1] = -1;
      *param_5 = -1;
    }
    lVar7 = *(long *)PTR____stack_chk_guard_100ba2320;
    uVar10 = 0;
  }
  if (bVar11) {
    QMutex::unlock();
  }
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

