
void FUN_10025bf30(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  QArrayData *local_38;
  long *local_30;
  undefined1 local_21;
  
  uVar4 = (**(code **)(**(long **)(param_1 + 8) + 0x68))();
  FUN_100259440(&local_30,uVar4,param_2);
  if (local_30 == (long *)0x0) {
    return;
  }
  if (local_30[2] == 0) goto LAB_10025c03a;
  QMutex::lock();
  if (local_30 != (long *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  plVar2 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = local_30;
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
  lVar3 = *(long *)(param_1 + 8);
  cVar5 = '\0';
  if (local_30 != (long *)0x0) {
    cVar5 = (char)local_30[2];
  }
  CBaseNode::toString(SUB81(&local_38,0),(bool)(cVar5 + '\x10'));
  CBaseNode::fromString
            ((CBaseNode *)(lVar3 + 0x10),(QTypedArrayData<unsigned_short> *)&local_38,false,
             (QString *)0x0,(int *)0x0,(int *)0x0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10025c025;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10025c025:
  QMutex::unlock();
  if (local_30 == (long *)0x0) {
    return;
  }
LAB_10025c03a:
  LOCK();
  plVar2 = local_30 + 1;
  lVar3 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)(*local_30 + 0x10))();
  }
  return;
}

