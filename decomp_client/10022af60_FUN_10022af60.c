
void FUN_10022af60(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_50 [24];
  QString local_38;
  undefined1 local_29;
  
  if (*(int *)(*(long *)(param_1 + 0x60) + 4) == 0) {
    return;
  }
  iVar2 = CAbstractTask::getCurrentSubTask();
  if (iVar2 != 1) {
    return;
  }
  FUN_100188480(&local_38,param_2);
  cVar1 = operator==(&local_38,(QString *)(param_1 + 0x60));
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022afe7;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10022afe7:
  if (cVar1 == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    FUN_10098e0d0(local_50,0);
    FUN_10011cdf0(&local_58,param_2);
    QMetaObject::tr((char *)&local_60,(char *)&PTR_staticMetaObject_102202120,0x1dda9c0);
    FUN_10098e1d0(local_50,&local_58,param_1 + 0xb8,&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10022b07e;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10022b07e:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10022b0ae;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10022b0ae:
    FUN_10098e170(local_50);
  }
  FUN_10018d830(&local_68,param_2);
  FUN_100812f60(param_1,0,&local_68);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10022b103;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10022b103:
  CAbstractTask::subTaskCompleted((int)param_1);
  return;
}

