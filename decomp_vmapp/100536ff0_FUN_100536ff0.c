
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100536ff0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  bool bVar6;
  long *local_38;
  
  plVar3 = operator_new(0x20);
  *plVar3 = 0;
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  bVar6 = plVar4 == (long *)0x0;
  if (bVar6) {
    operator_delete(plVar3);
    plVar4 = (long *)0x0;
    plVar3 = (long *)0x0;
  }
  else {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = (long)plVar3;
    *plVar4 = (long)&PTR_FUN_10111d728;
  }
  lVar1 = *param_2;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  plVar2 = (long *)*plVar3;
  *plVar3 = lVar1;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar3 = plVar2 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (bVar6) {
    DAT_00000018 = 0;
    _DAT_00000008 = param_3;
    _DAT_00000010 = param_4;
  }
  else {
    lVar1 = plVar4[2];
    *(undefined8 *)(lVar1 + 8) = param_3;
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    *(undefined1 *)(lVar1 + 0x18) = 0;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = plVar4;
  uVar5 = FUN_100539e10(param_1,&local_38,0);
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (!bVar6) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar1 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar1 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return uVar5;
}

