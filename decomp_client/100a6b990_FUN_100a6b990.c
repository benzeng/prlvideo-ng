
undefined1 FUN_100a6b990(long param_1,uint param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  
  uVar4 = (**(code **)(*param_4 + 0x80))(param_4);
  lVar5 = FUN_100a687d0(param_4);
  plVar6 = operator_new(0x18);
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = lVar5;
  *plVar6 = (long)&PTR_FUN_102282990;
  uVar2 = *(uint *)(param_1 + 0x4c);
  if (param_2 < uVar2) {
    uVar9 = 1;
    if (1 < uVar2) {
      uVar9 = (ulong)uVar2;
    }
    uVar7 = (ulong)param_2;
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar3 = *(long **)(param_1 + 0x80 + uVar7 * 8);
    *(long **)(param_1 + 0x80 + uVar7 * 8) = plVar6;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined4 *)(param_1 + 0x80 + (uVar9 + uVar7) * 8) = param_3;
    *(undefined4 *)(param_1 + 0x84 + (uVar9 + uVar7) * 8) = uVar4;
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return uVar8;
}

