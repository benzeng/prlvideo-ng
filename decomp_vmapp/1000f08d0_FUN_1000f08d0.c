
void FUN_1000f08d0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  long *local_40;
  QArrayData *local_38;
  long *local_30;
  undefined1 local_21;
  
  FUN_100119090(&local_30,param_1,0);
  uVar3 = DAT_1011c3650;
  FUN_10011cf50(&local_40);
  cVar4 = '\0';
  if (local_40 != (long *)0x0) {
    cVar4 = (char)local_40[2];
  }
  CBaseNode::toString(SUB81(&local_38,0),(bool)(cVar4 + '\b'));
  FUN_100063e20(uVar3,&local_38,0x1389,param_1,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000f097a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000f097a:
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_40 + 0x10))();
    }
  }
  if (local_30 != (long *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  return;
}

