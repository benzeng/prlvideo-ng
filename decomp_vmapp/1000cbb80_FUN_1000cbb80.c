
undefined8 FUN_1000cbb80(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  QString local_48;
  long *local_40;
  QString local_38;
  long *local_30;
  undefined1 local_21;
  
  FUN_10011a560(&local_30);
  lVar5 = 0;
  if (local_30 != (long *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    lVar5 = local_30[2];
    LOCK();
    plVar2 = local_30 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  FUN_1000c81f0(param_1,0x400000);
  *(undefined1 *)(param_1 + 0x448) = 0;
  FUN_1000c95f0(param_1,(QString *)(param_1 + 0x440));
  uVar4 = FUN_10011d660(lVar5);
  if ((uVar4 & 0x1000) == 0) {
    FUN_10012d350(&local_48,lVar5);
    QString::operator=((QString *)(param_1 + 0x440),&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_21 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000cbd0a;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
    goto LAB_1000cbd0a;
  }
  FUN_10012d4d0(&local_38,lVar5);
  QString::operator=((QString *)(param_1 + 0x358),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000cbca0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1000cbca0:
  FUN_1000cbe20(&local_40,lVar5);
  if (local_40 != (long *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  plVar2 = *(long **)(param_1 + 0x450);
  *(long **)(param_1 + 0x450) = local_40;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_40 + 0x10))(local_40);
    }
  }
LAB_1000cbd0a:
  FUN_10008fa70(param_1,4);
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return 0;
}

