
undefined1 FUN_10006b4e0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  char cVar4;
  long *local_38;
  QArrayData *local_30;
  long *local_28;
  undefined1 local_19;
  
  FUN_100119090(&local_28);
  FUN_10011cf50(&local_38);
  cVar4 = '\0';
  if (local_38 != (long *)0x0) {
    cVar4 = (char)local_38[2];
  }
  CBaseNode::toString(SUB81(&local_30,0),(bool)(cVar4 + '\b'));
  if (local_38 != (long *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  uVar3 = FUN_100063e20(*(undefined8 *)(param_1 + 0x10),&local_30,0x1389,param_2,0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10006b59d;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10006b59d:
  if (local_28 != (long *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  return uVar3;
}

