
void FUN_1000cf8c0(QObject *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long *local_38;
  undefined1 local_29;
  
  if (param_1[0x10d] == (QObject)0x0) {
    plVar2 = operator_new(0x20);
    *plVar2 = (long)&PTR_FUN_10226cdc0;
    lVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_1);
    plVar2[1] = lVar3;
    plVar2[2] = (long)param_1;
    piVar1 = (int *)*param_2;
    plVar2[3] = (long)piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_29 = *piVar1 != 0;
      UNLOCK();
    }
    plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
    if (plVar4 == (long *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2);
      plVar4 = (long *)0x0;
    }
    else {
      *(undefined4 *)(plVar4 + 1) = 1;
      plVar4[2] = (long)plVar2;
      *plVar4 = (long)&PTR_FUN_10226ca80;
    }
    uVar5 = FUN_100152280();
    uVar5 = FUN_1001548f0(uVar5,param_1 + 0x10);
    uVar5 = FUN_10018c280(uVar5);
    uVar5 = FUN_100319c30(uVar5);
    if (plVar4 != (long *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_38 = plVar4;
    FUN_10032fbd0(uVar5,&local_38,param_3);
    if (local_38 != (long *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar2 = plVar4 + 1;
      lVar3 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return;
}

