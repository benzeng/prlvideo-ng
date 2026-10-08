
void FUN_10026dff0(long *param_1)

{
  char cVar1;
  QString local_30;
  undefined1 local_22;
  
  FUN_100188480(&local_30);
  cVar1 = operator==((QString *)(param_1 + 0xc),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_22 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10026e04e;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_10026e04e:
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

