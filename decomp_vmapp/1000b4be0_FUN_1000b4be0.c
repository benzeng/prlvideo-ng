
undefined8
FUN_1000b4be0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10011cf50(&local_48);
  cVar3 = '\0';
  if (local_48 != (long *)0x0) {
    cVar3 = (char)local_48[2];
  }
  CBaseNode::toString(SUB81(&local_40,0),(bool)(cVar3 + '\b'));
  FUN_100069140(param_1,param_2,&local_40,param_4,param_5,1,param_6);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000b4c89;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000b4c89:
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  return param_1;
}

