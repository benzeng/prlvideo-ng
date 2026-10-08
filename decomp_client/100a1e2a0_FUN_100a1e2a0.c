
undefined1 FUN_100a1e2a0(long *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  lVar2 = 0;
  if ((*param_1 != 0) && (lVar2 = 0, *(int *)(*param_1 + 4) != 0)) {
    lVar2 = param_1[1];
  }
  lVar3 = 0;
  if ((*param_2 != 0) && (lVar3 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar3 = param_2[1];
  }
  if (lVar2 != lVar3) {
    return 0;
  }
  FUN_100226f20(&local_20,param_1);
  FUN_100226f20(&local_28,param_2);
  uVar1 = operator==(&local_20,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100a1e33e;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100a1e33e:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return uVar1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return uVar1;
}

