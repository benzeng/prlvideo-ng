
undefined8 FUN_100790c20(undefined8 param_1,int *param_2)

{
  int iVar1;
  QArrayData *local_28;
  undefined1 local_19;
  
  iVar1 = *param_2;
  local_28 = (QArrayData *)QString::fromAscii_helper("%1",2);
  QString::arg(param_1,&local_28,(long)iVar1,0,10,0x20);
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

