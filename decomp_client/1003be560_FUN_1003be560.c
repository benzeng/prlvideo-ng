
undefined8 FUN_1003be560(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_38 = (QArrayData *)QString::fromAscii_helper("Hardware.%1[%2]",0xf);
  FUN_1003b0eb0(&local_40,param_3);
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  QString::arg(param_1,&local_30,(long)param_4,0,10,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003be5fb;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1003be5fb:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003be62b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003be62b:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

