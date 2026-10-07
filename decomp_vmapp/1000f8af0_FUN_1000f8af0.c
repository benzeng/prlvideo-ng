
void FUN_1000f8af0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 local_70 [8];
  QArrayData *local_68;
  undefined1 local_21;
  
  *(undefined4 *)(param_1 + 0x5c) = 4;
  FUN_1000ae340(local_70,*(undefined8 *)(param_1 + 0x50));
  uVar4 = FUN_1000f8e80(param_1,local_70);
  FUN_10008fdb0(*(undefined8 *)(param_1 + 0x50),0x4e4c,uVar4);
  plVar5 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  plVar6 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_FUN_100bef0d0;
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar6 = plVar5;
  }
  plVar2 = *(long **)(param_1 + 0x48);
  *(long **)(param_1 + 0x48) = plVar6;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (plVar5 != (long *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 1;
  QThread::exit((int)param_1 + 0x18);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_68,2,8);
  }
  return;
}

