
undefined8 FUN_1006e3260(undefined8 param_1,undefined8 param_2)

{
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30 = (QArrayData *)
             QString::fromAscii_helper("com.parallels.desktop.parental_control_socket2.%1",0x31);
  QString::arg(&local_28,&local_30,param_2,0,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e32ce;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006e32ce:
  local_38 = (QArrayData *)QString::fromAscii_helper("/var/tmp/%1",0xb);
  QString::arg(param_1,&local_38,&local_28,0,0x20);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006e332b;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006e332b:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

