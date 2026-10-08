
void FUN_1009b62e0(long param_1)

{
  undefined8 uVar1;
  QString local_28;
  undefined1 local_1a;
  
  QMetaObject::tr((char *)&local_28,(char *)&PTR_PTR_102235990,0x1e35289);
  QString::operator=((QString *)(param_1 + 0x50),&local_28);
  FUN_1009b4cd0(param_1);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_1a = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_1009b6354;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1009b6354:
  FUN_1009b5410(param_1,1);
  uVar1 = FUN_1009983c0(param_1);
  FUN_100992840(uVar1);
  return;
}

