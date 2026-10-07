
void FUN_10065a060(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *local_40;
  long *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  CHwHddPartition::getSystemName();
  plVar4 = (long *)FUN_10065c880(param_1,&local_30);
  uVar5 = CHwHddPartition::getOsDistrInfo();
  uVar6 = CHwHddPartition::getOsInfo();
  FUN_10065d680(&local_40,uVar5,uVar6);
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  plVar2 = (long *)*plVar4;
  *plVar4 = (long)local_40;
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
  if (local_38 != (long *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  plVar2 = (long *)plVar4[1];
  plVar4[1] = (long)local_38;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_38 + 0x10))(local_38);
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_40 + 0x10))(local_40);
    }
  }
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

