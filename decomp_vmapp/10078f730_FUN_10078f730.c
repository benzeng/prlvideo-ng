
undefined1 FUN_10078f730(long param_1,uint param_2,undefined4 param_3,void *param_4,uint param_5)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  long *plVar6;
  undefined1 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)(param_1 + 0x4c);
  if (uVar2 <= param_2) {
    return 0;
  }
  plVar6 = (long *)0x0;
  if (param_5 != 0) {
    pvVar5 = operator_new__((ulong)param_5,(nothrow_t *)PTR_nothrow_100ba21c8);
    plVar6 = operator_new(0x18);
    *(undefined4 *)(plVar6 + 1) = 1;
    plVar6[2] = (long)pvVar5;
    *plVar6 = (long)&PTR_FUN_100bef320;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar6 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    if ((void *)plVar6[2] == (void *)0x0) {
      uVar7 = 0;
      FUN_1008e3970("","IOCommunication",0,"Can\'t allocate memory!");
      goto LAB_10078f8a8;
    }
    _memcpy((void *)plVar6[2],param_4,(ulong)param_5);
    uVar2 = *(uint *)(param_1 + 0x4c);
  }
  if (param_2 < uVar2) {
    uVar8 = 1;
    if (1 < uVar2) {
      uVar8 = (ulong)uVar2;
    }
    uVar9 = (ulong)param_2;
    if (plVar6 != (long *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    plVar3 = *(long **)(param_1 + 0x80 + uVar9 * 8);
    *(long **)(param_1 + 0x80 + uVar9 * 8) = plVar6;
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined4 *)(param_1 + 0x80 + (uVar8 + uVar9) * 8) = param_3;
    *(uint *)(param_1 + 0x84 + (uVar8 + uVar9) * 8) = param_5;
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
LAB_10078f8a8:
  if (plVar6 != (long *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    lVar4 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  return uVar7;
}

