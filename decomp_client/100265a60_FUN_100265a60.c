
void FUN_100265a60(long *param_1,undefined8 param_2)

{
  char cVar1;
  QString local_28;
  undefined1 local_1a;
  
  FUN_10018c2b0(param_2);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  cVar1 = operator==(&local_28,(QString *)(param_1 + 0x28));
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_1a = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_100265ace;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_100265ace:
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}

