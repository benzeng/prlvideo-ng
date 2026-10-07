
void FUN_100546b20(long param_1,char *param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  QString local_40;
  undefined1 local_32;
  
  if (param_2 != (char *)0x0) {
    _strlen(param_2);
  }
  QString::fromUtf8_helper((char *)&local_40,(int)param_2);
  QString::operator=((QString *)(param_1 + 8),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_100546bac;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100546bac:
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_100761540(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

