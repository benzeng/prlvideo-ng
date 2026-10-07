
undefined1 FUN_10006d710(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  long *local_40;
  QArrayData *local_38;
  long *local_30;
  undefined1 local_21;
  
  lVar4 = 0;
  FUN_100119090(&local_30,param_2,0);
  if (local_30 != (long *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    lVar4 = local_30[2];
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x110);
  if (lVar2 == 0) {
    uVar3 = FUN_10006b4e0(param_1,param_2,0x80000036);
    goto LAB_10006d829;
  }
  CBaseNode::toString(SUB81(&local_38,0),(bool)((char)lVar2 + '\x10'));
  FUN_100125300(lVar4,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10006d7c0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10006d7c0:
  lVar4 = 0;
  if (local_30 != (long *)0x0) {
    lVar4 = local_30[2];
  }
  FUN_10011cf50(&local_40,lVar4);
  lVar4 = 0;
  if (local_40 != (long *)0x0) {
    lVar4 = local_40[2];
  }
  uVar3 = FUN_10006b660(param_1,param_2,lVar4);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
LAB_10006d829:
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return uVar3;
}

