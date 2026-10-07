
char * FUN_1001149c0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(&local_30,&local_38,param_3,0,0x10,0x20);
  QString::toUtf8();
  std::string::__init(param_1,(ulong)(local_28 + *(long *)(local_28 + 0x10)));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100114a58;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100114a58:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100114a88;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100114a88:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

